/*
Created by Kilian

The class user will store the user data and handle put/get/post requests

*/

#include "user.h"
#include <math.h>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>

user::user()
{
    //getUserHttp("http://192.168.178.53:6502/v1/tracker/api/users");
}

//standard getter functions

int user::getUserId(){return this->userId;}

int user::getAge(){return this->age;}

QString user::getName(){return this->name;}

QString user::getPassword(){return this->password;}

float user::getWeight(){return this->weight;}

float user::getHeight(){return this->height;}

float user::getCalfCir(){return this->calfCir;}

float user::getHipCir(){return this->hipCir;}

float user::getTightCir(){return this->tightCir;}

float user::getChestCir(){return this->chestCir;}

float user::getUpperArmCir(){return this->upperArmCir;}

float user::getBmi(){return this->bmi;}


//standard setter functions

void user::setUserId(int userId){this->userId=userId;}

void user::setAge(int age){this->age=age;}


void user::setName(QString name){this->name=name;}

void user::setPassword(QString password){this->password=password;}


//if weight or height is set bmi will be calculated(mybe outsource to controllers)
void user::setWeight(float weight){this->weight=weight; calcBmi();}
void user::setHeight(float height){this->height=height; calcBmi();}


void user::setCalfCir(float calfCir){this->calfCir=calfCir;}

void user::setHipCir(float hipCir){this->hipCir=hipCir;}

void user::setTightCir(float tightCir){this->tightCir=tightCir;}

void user::setChestCir(float chestCir){this->chestCir=chestCir;}

void user::setUpperArmCir(float upperArmCir){this->upperArmCir=upperArmCir;}

void user::setBmi(float bmi){this->bmi=bmi;}


//function to calculate bmi based on weight, height (future maybe based on age too)

void user::calcBmi(){this->bmi = weight/pow(height, 2);}



//functions to get http request. takes QString as argumnent(e.g. "http://192.168.178.53:6502/v1/tracker/api/users?username=maxi&password=password")
//get will use parameters starting with "?" and seperated by "&" like ("?username=maxi&password=password")
void user::getUserHttp(QString location, QString userId)
{
    QNetworkAccessManager *man = new QNetworkAccessManager;
    QNetworkAccessManager::connect(man, &QNetworkAccessManager::finished, this, &user::getFinished);
    QString httprequest= location + "?userId="+userId;

    QNetworkRequest request(httprequest);
    man->get(request);
}

//will be automatically called when PutUserHttp(QString location); is done
void user::getFinished(QNetworkReply *reply)
{
    //Casting the network reply into QList<QString> ordered for better usage
    QByteArray temp = reply->readAll();
    QList<QString> ordered;

    int quotationmark  = 0;
    int iterator = 0;
    QString word;

    for(int i=0; i<temp.length(); i++){
       if(quotationmark%2==1){
           word.append(temp[i]);
       }
       else {
           word.chop(1);
           if(!word.isEmpty()){
               ordered.append(word);}

           word=NULL;
        }
       if(temp[i]=='"') quotationmark++;
    }

    //setting the variables for user from the created list ordered
    setUser(ordered);
}

//functions to put http request. takes QString as argumnent(e.g. "http://192.168.178.53:6502/v1/tracker/api/users)
void user::PutUserHttp(QString location, int userId, QString name, int age, float weight, float height, float calfCir, float hipCir, float tightCir, float chestCir, float upperArmCir,float bmi)
{
    QNetworkAccessManager *man = new QNetworkAccessManager;
    QNetworkAccessManager::connect(man, &QNetworkAccessManager::finished, this, &user::putFinished);

    QNetworkRequest request(location);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //creating an QByteArray in json style to be added to the request
    QJsonObject json;
    json.insert("userId", userId);
    json.insert("userName", name);
    json.insert("age", age);
    json.insert("weight", weight);
    json.insert("userName", name);
    json.insert("height", height);
    json.insert("calfCir", calfCir);
    json.insert("hipCir", hipCir);
    json.insert("tightCir", tightCir);
    json.insert("chestCir", chestCir);
    json.insert("upperArmCir", upperArmCir);

    //QByteArray data("{\"key1\":\"value1\",\"key2\":\"value2\"}");

    man->put(request, QJsonDocument(json).toJson());  // QJsonDocument(json).toJson()

}

//will be automatically called when PutUserHttp(QString location); is done
void user::putFinished(QNetworkReply *reply){
               qInfo() << reply->readAll();
}



//setting the variables for user from list
void user::setUser(QList<QString> &ordered){
    for(int i=0; i<ordered.length();i++){
    if(ordered[i]=="calfCir") setCalfCir(ordered[i+1].toFloat());
    if(ordered[i]=="age") setAge(ordered[i+1].toInt());
    if(ordered[i]=="bmi") setBmi(ordered[i+1].toFloat());
    if(ordered[i]=="chestCir") setChestCir(ordered[i+1].toFloat());
    if(ordered[i]=="height") setHeight(ordered[i+1].toFloat());
    if(ordered[i]=="hipCir") setHipCir(ordered[i+1].toFloat());
    if(ordered[i]=="userName") setName(ordered[i+1]);
    if(ordered[i]=="password") setPassword(ordered[i+1]);
    if(ordered[i]=="tightCir") setTightCir(ordered[i+1].toFloat());
    if(ordered[i]=="upperArmCir") setUpperArmCir(ordered[i+1].toFloat());
    if(ordered[i]=="userId") setUserId(ordered[i+1].toInt());
    if(ordered[i]=="weight") setWeight(ordered[i+1].toFloat());
    }
}

//for login user
void user::authUser(QString location, QString username, QString password){
    QNetworkAccessManager *man = new QNetworkAccessManager;
    QNetworkAccessManager::connect(man, &QNetworkAccessManager::finished, this, &user::authFinished);
    QString httprequest= location + "?username="+username+"&password=" + password;

    QNetworkRequest request(httprequest);
    man->get(request);
}


void user::authFinished(QNetworkReply *reply)
{

    //qInfo() << reply->readAll();
    //Casting the network reply into QList<QString> ordered for better usage
    QByteArray temp = reply->readAll();
    QList<QString> ordered;


    int quotationmark  = 0;
    int iterator = 0;
    QString word;

    for(int i=0; i<temp.length(); i++){
       if(quotationmark%2==1){
           word.append(temp[i]);
       }
       else {
           word.chop(1);
           if(!word.isEmpty())ordered.append(word);
           word=NULL;
        }
       if(temp[i]=='"') quotationmark++;
    }
    if(ordered[0]=="token"){ this->token = ordered[1];
    this->setUserId(ordered[3].toInt());
    }
    //
    //if(ordered[0]!="token") ;
    //setting the variables for user from the created list ordered
    //setUser(ordered);

}
