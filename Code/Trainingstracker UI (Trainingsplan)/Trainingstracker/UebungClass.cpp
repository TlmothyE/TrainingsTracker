/*
Created by Badee

The class creates the exercise plan. as the user chooses between strengthening and continuous exercise.

*/
#include <string>
#include <iostream>
#include "UebungHead.h"

using namespace std;

class Uebung {

    int uebungsId;
    string name;

    public:
    Uebung() {
    //standard Variable
        string eingaben;
        int saetze=0;
        float gewicht=0;
        float dauer=0;
        cout << " geben Sie bitte Kraftig fuer kraftUbung oder Dauer fuer dauerhaftUebung" << endl;
        cin >> eingaben;
    // Controller and choose between strength and permanent exercise
        if (eingaben == "Kraftig") {
           // Uebungkraftig(cin >> saetze,  cin >> gewicht);
        } else if(eingaben == "Dauer") {
           // Uebungdauerhaft( cin >> dauer);
        } else{
            cout << " falsche Eingabe" << endl;
        }
    }
    //standard getter and setter functions
    void setuebungId(int uebungsId){
            this->uebungsId = uebungsId; // frage wegen benutzer eingeben // TODO
    };
    int getuebungId()const{

        return uebungsId;
    };
    void setname(string Name){
        this->name = Name; // TODO
    };
    string getname()const{
        return name;

    };

};


class Uebungdauerhaft: public Uebung{

    float dauer;

public :Uebungdauerhaft(float dauer1){

    // training Time between 1 and 3 hour
        if (dauer1 < 1 || dauer1 > 3 ){
             cout << "falsche Eingabe" << endl;
        }else {
            this->dauer = dauer1;
        }

    };

    // getter Funktion
    float getdauer()const{
        return  dauer;
    };
    // time training
    float sollZeit(){
        return getdauer();

    };


};

class Uebungkraftig : public Uebung{


    float gewicht =0.0;
    int seatze = 0;
    int zaehler =0;
    int zaehler1 =0;

public:  Uebungkraftig(int saetze0, float  gewicht0){
        this->seatze =  saetze0;
        this->gewicht = gewicht0;
        // control
        for (int i = 0; i < getseatze(); ++i) {
            zaehler ++;
            if (zaehler =! getseatze()){
                istWiederholungen();
                cout<<  getzaehler1() <<endl;
            }else if(zaehler == getseatze()){
               cout<<  sollWiederholungen() <<endl;
            }
        }

    };

    // finished exercise
    int sollWiederholungen(){
        return getseatze();

    };
    // Not finished exercise
    int istWiederholungen(){
        zaehler1++;
    };

    //standard getter and setter functions
    void setgewicht(int gewicht1){
        this->gewicht=gewicht1;
    };
    int getgewicht()const{
        return gewicht;

    };
    void setseatze(int seatze1){
        this->seatze=seatze1;
    };
    int getseatze()const{
        return  seatze;
    };

    int getzaehler1()const{
        return zaehler1;

    };
};