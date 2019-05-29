//
// Created by mohamed elqandili on 5/29/19.
//

#include "evenement.h"

Time::evenement::evenement (const Date &date , const string &sujet) : date(date) , sujet(sujet) {}



const string &Time::evenement::getSujet () const {
    return sujet;
}

//void Time::evenement::afficher (ostream &f) const {
//    f<<"****** EVT ********"<<"\n"<<"date ="<<date<<" sujet ="<<sujet<<"\n";
//}

const Time::Date &Time::evenement::getDate () const {
    return date;
}

