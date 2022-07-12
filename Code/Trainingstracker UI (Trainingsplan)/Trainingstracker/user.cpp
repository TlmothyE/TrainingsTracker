/*
Created by Kilian

The class User will store the User data and handle put/get/post requests

*/

#include "user.h"
#include <math.h>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>

User::User()
{
    //getUserHttp("http://192.168.178.53:6502/v1/tracker/api/users");
}

//standard getter functions

int User::getUserId(){return this->userId;}

int User::getAge(){return this->age;}

QString User::getName(){return this->name;}

QString User::getPassword(){return this->password;}

float User::getWeight(){return this->weight;}

float User::getHeight(){return this->height;}

float User::getCalfCir(){return this->calfCir;}

float User::getHipCir(){return this->hipCir;}

float User::getTightCir(){return this->tightCir;}

float User::getChestCir(){return this->chestCir;}

float User::getUpperArmCir(){return this->upperArmCir;}

float User::getBmi(){return this->bmi;}


//standard setter functions

void User::setUserId(int userId){ this->userId=userId;}

void User::setAge(int age){ this->age=age;}


void User::setName(QString name){ this->name=name;}

void User::setPassword(QString password){ this->password=password;}


//if weight or height is set bmi will be calculated(mybe outsource to controllers)
void User::setWeight(float weight){ this->weight=weight; calcBmi();}
void User::setHeight(float height){ this->height=height; calcBmi();}


void User::setCalfCir(float calfCir){ this->calfCir=calfCir;}

void User::setHipCir(float hipCir){ this->hipCir=hipCir;}

void User::setTightCir(float tightCir){ this->tightCir=tightCir;}

void User::setChestCir(float chestCir){ this->chestCir=chestCir;}

void User::setUpperArmCir(float upperArmCir){ this->upperArmCir=upperArmCir;}

void User::setBmi(float bmi){ this->bmi=bmi;}


//function to calculate bmi based on weight, height (future maybe based on age too)

void User::calcBmi(){ this->bmi = weight / pow(height, 2);}



//functions to get http request. takes QString as argumnent(e.g. "http://192.168.178.53:6502/v1/tracker/api/users?username=maxi&password=password")
//get will use parameters starting with "?" and seperated by "&" like ("?username=maxi&password=password")
void User::getUserHttp(QString location, QString userId)
{
    QNetworkAccessManager *man = new QNetworkAccessManager;
    QNetworkAccessManager::connect(man, &QNetworkAccessManager::finished, this, &User::getFinished);
    QString httprequest= location + "?userId="+userId;

    QNetworkRequest request(httprequest);
    man->get(request);
}

//will be automatically called when PutUserHttp(QString location); is done
void User::getFinished(QNetworkReply *reply)
{
    //Casting the network reply into QList<QString> ordered for better usage
    QByteArray temp = reply->readAll();
    QList<QString> ordered;

    int quotationmark  = 0;
    QString word;

    for(auto && i : temp){
       if(quotationmark%2==1){
           word.append(i);
       }
       else {
           word.chop(1);
           if(!word.isEmpty()){
               ordered.append(word);}

           word = nullptr;
        }
       if(i=='"') quotationmark++;
    }

    //setting the variables for User from the created list ordered
    setUser(ordered);
}

//functions to put http request. takes QString as argumnent(e.g. "http://192.168.178.53:6502/v1/tracker/api/users)
void User::PutUserHttp(QString location, int userId, QString name, int age, float weight, float height, float calfCir, float hipCir, float tightCir, float chestCir, float upperArmCir, float bmi)
{
    QNetworkAccessManager *man = new QNetworkAccessManager;
    QNetworkAccessManager::connect(man, &QNetworkAccessManager::finished, this, &User::putFinished);

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
void User::putFinished(QNetworkReply *reply){
               qInfo() << reply->readAll();
}



//setting the variables for User from list
void User::setUser(QList<QString> &ordered){
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

//for login User
void User::authUser(QString location, QString username, QString password){
    QNetworkAccessManager *man = new QNetworkAccessManager;
    QNetworkAccessManager::connect(man, &QNetworkAccessManager::finished, this, &User::authFinished);
    QString httprequest= location + "?username="+username+"&password=" + password;

    QNetworkRequest request(httprequest);
    man->get(request);
}


void User::authFinished(QNetworkReply *reply)
{


    //Casting the network reply into QList<QString> ordered for better usage
    QByteArray temp = reply->readAll();
    QList<QString> ordered;


    int quotationmark  = 0;
    QString word;

    for(auto && i : temp){
       if(quotationmark%2==1){
           word.append(i);
       }
       else {
           word.chop(1);
           if(!word.isEmpty())ordered.append(word);
           word=nullptr;
        }
       if(i=='"') quotationmark++;
    }
    if(ordered[0]=="token"){ this->token = ordered[1];
    this->setUserId(ordered[3].toInt());
    }


}
