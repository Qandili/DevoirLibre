//
// Created by mohamed elqandili on 5/29/19.
//

#ifndef DEVOIRLIBRE_EVENEMENT_H
#define DEVOIRLIBRE_EVENEMENT_H
#include "iostream"
using namespace std;

class evenement {
private:
    Date date;
    string sujet;
public:
    const Date &getDate () const;

    const string &getSujet () const;

    evenement (const Date &date , const string &sujet);
    void afficher(ostream& f=cout) const ;
};


#endif //DEVOIRLIBRE_EVENEMENT_H
