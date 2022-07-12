//
// Created by Badee.
//
#include <string>
#include <iostream>
using namespace std;
#ifndef UBUNGSPORT_UBUNG_H
#define UBUNGSPORT_UBUNG_H


class UebungHead {


private :
    string eingaben;
    int saetze;
    float gewicht;
    float dauer;
    int ubungsId;
    string name;

    void setuebungId(int uebungsId);
    int getuebungId();
    void setname(string Name);
    string getname();

};

class UebungdauerhaftHead {


private:
    float dauer;
    float getdauer();

};

class UebungkraftigHead {

private:
    float gewicht ;
    int saetze  ;
    int zaehler ;
    int zaehler1 ;
    int sollWiederholungen();
    int istWiederholungen();
    void setgewicht(int gewicht1);
    int getgewicht();
    void setsaetze(int saetze1);
    int getsaetze();
    int getzaehler1();


};

#endif //UBUNGSPORT_UBUNG_H
