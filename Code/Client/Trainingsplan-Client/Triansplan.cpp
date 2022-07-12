#include <iostream>

#include "Trainingsplan.h"

//constructs empty list
Trainingsplan::Trainingsplan(){
    today = time(0);
    std::list<Uebung> Uebungsliste();
    
}

//frees the list's memorie
Trainingsplan::~Trainingsplan(){
  Uebungsliste.clear();
}

//function to add new cardio exercise to the end of the list
void Trainingsplan::addAusdaueruebung(std::list<Uebung>& Uebungsliste, Ausdaueruebung AUebung){

  Uebungsliste.emplace_back(AUebung);
}

//function to add new exercise to the end of the list
void Trainingsplan::addKraftuebung(std::list<Uebung>& Uebungsliste, Kraftuebung KUebung){

Uebungsliste.emplace_back(KUebung);

}

void Trainingsplan::getUebungen(std::list<Uebung>& Uebungsliste){

std::list<Uebung>::iterator it;

    if(!Uebungsliste.empty()){
    
      for(it = Uebungsliste.begin(); it != Uebungsliste.end(); it++){
        std::cout <<  it->Name;

      }

    }

}