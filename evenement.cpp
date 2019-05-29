//
// Created by mohamed elqandili on 5/29/19.
//

#include "evenement.h"

evenement::evenement (const Date &date , const string &sujet) : date(date) , sujet(sujet) {}

const Date &evenement::getDate () const {
    return date;
}

const string &evenement::getSujet () const {
    return sujet;
}

void evenement::afficher (ostream &f) const {
    f<<"****** EVT ********"<<"\n"<<"date ="<<date<<" sujet ="<<sujet<<"\n";
}
