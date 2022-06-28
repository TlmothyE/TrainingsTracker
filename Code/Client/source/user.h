/*
Created by Kilian

The class user will store the user data and handle put/get/post requests

*/

#ifndef USER_H
#define USER_H
#include <QString>
#include <QNetworkAccessManager>
#include <QNetworkReply>


class user : public QObject
{
private:
    int userId;
    int age;
    QString name;
    QString password;   //todo: only store hash
    float weight;
    float height;
    float calfCir;
    float hipCir;
    float tightCir;
    float chestCir;
    float upperArmCir;
    float bmi;


public:
    user();


    user(user& u1){
        this->userId=u1.userId;
        this->age=u1.age;
        this->name=u1.name;
        this->password=u1.password;
        this->weight=u1.weight;
        this->height=u1.height;
        this->calfCir=u1.calfCir;
        this->hipCir=u1.hipCir;
        this->tightCir=u1.tightCir;
        this->chestCir=u1.chestCir;
        this->upperArmCir=u1.upperArmCir;
        this->bmi=u1.bmi;
    };

    //constructor to init user for test purpose. can be deleted before push
    user(int userId, int age, QString name ,QString password, float weight, float height, float calfCir,
         float hipCir, float tightCir, float chestCir, float upperArmCir, float bmi):
            userId(userId), age(age), name(name),password(password), weight(weight), height(height), calfCir(calfCir), hipCir(hipCir),
            tightCir(tightCir), chestCir(chestCir), upperArmCir(upperArmCir), bmi(bmi){};


    //standard setter functions
    void setUserId(int userId);
    void setName(QString name);
    void setAge(int age);
    void setPassword(QString password);
    void setWeight(float weight);
    void setHeight(float height);
    void setCalfCir(float calfCir);
    void setHipCir(float hipCir);
    void setTightCir(float thightCir);
    void setChestCir(float chestCir);
    void setUpperArmCir(float upperArmCir);
    void setBmi(float bmi);
    void setUser(QList<QString> &ordered);

    //standard getter functions
    int getUserId();
    QString getName();
    int getAge();
    QString getPassword();
    float getWeight();
    float getHeight();
    float getCalfCir();
    float getHipCir();
    float getTightCir();
    float getChestCir();
    float getUpperArmCir();
    float getBmi();

    QString token;

    //function to calculate bmi based on weight, height (future maybe based on age too)
    void calcBmi();


    //functions to get and put http requests. takes one QString as argumnent(e.g. "http://192.168.178.53:6502/v1/tracker/api/users?username=maxi&password=password")
    //?can maybe be outsourced to a standalone klass?
    void getUserHttp(QString location, QString userId);
    void PutUserHttp(QString location,int userId, QString name, int age, float weigh, float height, float calfCir, float hipCir, float tightCir, float chestCir, float upperArmCir,float bmi);

    void authUser(QString location, QString username, QString password);
   

private slots:

    //getUserHttp and PutUserHttp will automatically call this function after network requests are done
    //It gets an QNetworkReply from the request and is used to process this reply
     void getFinished(QNetworkReply *reply);
     void putFinished(QNetworkReply *reply);
     void authFinished(QNetworkReply *reply);
};

#endif // USER_H
