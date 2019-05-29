//
// Created by mohamed elqandili on 5/29/19.
//

#ifndef DEVOIRLIBRE_EVENEMENT_H
#define DEVOIRLIBRE_EVENEMENT_H
#include "iostream"
#include "timing.h"
using namespace std;
namespace Time {
    class evenement {
    private:
        Date date;
        string sujet;
    public:
        const Date &getDate () const;

        const string &getSujet () const;

        evenement (const Date &date , const string &sujet);

        void afficher (ostream &f = cout) const{
            f<<"****** EVT ********"<<"\n"<<"date ="<<this->date<<"\n"<<" sujet ="<<sujet<<"\n";
        }
    };

}
#endif //DEVOIRLIBRE_EVENEMENT_H
