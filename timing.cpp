//
// Created by mohamed elqandili on 5/29/19.
//

#include "timing.h"

void Time::Date::afficher () {

}

std::ostream &Time::operator<< (std::ostream &os , const Time::Date &date) {
    os << "jour: " << date.jour << " mois: " << date.mois << " annee: " << date.annee;
    return os;
}

Time::Date::Date () : jour(0) , mois(0) , annee(0)  {}

Time::Date::Date (int jour , int mois , int annee) : jour(jour) , mois(mois) , annee(annee) {}

Time::Date::~Date () {

}

Time::Horaire::Horaire (int hour , int mins) : hour(hour) , mins(mins) {}

Time::Horaire::Horaire () {}

Time::Horaire::~Horaire () {

}

void Time::Horaire::afficher () {

}

Time::Duree::Duree () {}

Time::Duree::Duree (int hours , int minsD) : hours(hours) , minsD(minsD) {}

void Time::Duree::afficher () {

}

Time::Duree::~Duree () {

}
