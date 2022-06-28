/*
Created by Timothy

The class Trainingsplan is the main essence of our project. It's main purpose is to make a list of
all the planned exercises.  

*/


#ifndef TRAININGSPLAN_H
#define TRAININGSPLAN_H

#include <ctime>
#include <list>
#include <string.h>

class Uebung {

protected:
    
    
    public:
    Uebung();
    ~Uebung();
    void getName(Uebung);
    std::string Name;
};


class Kraftuebung : protected Uebung {
private: 
        
        public:
        Kraftuebung();
        ~Kraftuebung();
        
};

class Ausdaueruebung : protected Uebung {
    private:
    
    public:
        Ausdaueruebung();
        ~Ausdaueruebung();
        
};

//#include <Uebung.h>


class Trainingsplan {
    private:
        int TrainingsplanID;
        time_t today;
        std::list<Uebung> Uebungsliste;
    
    public:

         Trainingsplan();
         ~Trainingsplan(); 
        
        void addKraftuebung(std::list<Uebung>& Uebunsliste, Kraftuebung KUebung);
        void addAusdaueruebung(std::list<Uebung>& Uebunsliste, Ausdaueruebung AUebung);
        void getUebungen(std::list<Uebung>& Uebungsliste);
        void printDate();
        void printUebung();
};






#endif