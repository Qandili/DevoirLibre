//
// Created by mohamed elqandili on 5/29/19.
//

#ifndef DEVOIRLIBRE_TIMING_H
#define DEVOIRLIBRE_TIMING_H


#include <ostream>

namespace Time {
    //La classe Date//
    class Date{
    private:
        int jour, mois, annee;
    public:
        Date (int jour , int mois , int annee);

        Date ();

        void afficher();
        virtual ~Date ();

        friend std::ostream &operator<< (std::ostream &os , const Date &date);
    };


    //*********************//
    //La classe Horaire//
    class Horaire{
    private:
        int hour, mins;
    public:
        Horaire (int hour , int mins);

        Horaire ();

        void afficher();

        virtual ~Horaire ();
    };
    //*********************//
    //La classe Duree//
    class Duree{
    private:
        int hours,minsD;
    public:
        Duree ();

        Duree (int hours , int minsD);

        void afficher();

        virtual ~Duree ();
    };
};


#endif //DEVOIRLIBRE_TIMING_H
