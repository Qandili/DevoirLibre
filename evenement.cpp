#include "evenement.h"
#include <iostream>
using namespace TIME;
Evt1j::Evt1j(const Date& d, const std::string& s):date(d), sujet(s){};

Evt1j::~Evt1j(){};

ostream& Evt1j::operator<<(ostream& out){
    out<<"construction d'un objet Evt1j\n******Evt******\n"<<"Date = "<<date<<"\nSujet = "<<sujet;
    return out;
}

const std::string& Evt1j::getDescription() const{
    return sujet;
}

const Date& Evt1j::getDate() const{
    return date;
}

void Evt1j::afficher(ostream& f) const{
    f<<"\n******Evt******\n"<<"Date = "<<date<<"\nSujet = "<<sujet;
}

Evt1jDur::Evt1jDur(const Date& d, const std::string& s, const Duree& duree, const Horaire& h):Evt1j(d, s), horaire(h), duree(duree){};

Evt1jDur::~Evt1jDur(){};
void Evt1jDur::afficher(std::ostream& f) const{
    Evt1j::afficher();
    f<<"\nHoraire = "<<horaire<<"\nDuree = "<<duree;
}

const Horaire& Evt1jDur::getHoraire() const{
    return horaire;
}

const Duree& Evt1jDur::getDuree() const{
    return duree;
}

Rdv::Rdv(const Date& d, const std::string& s, const Duree& dur, const Horaire& h, const std::string& l, const std::string& p):Evt1jDur(d, s, dur, h), lieu(l), personnes(p){}

Rdv::~Rdv(){}

const std::string& Rdv::getLieu() const{
    return lieu;
}

const std::string& Rdv::getPersonnes() const{
    return personnes;
}

void Rdv::afficher(std::ostream& f) const{
    Evt1jDur::afficher();
    f<<"\nLieu = "<<lieu<<"\nPersonne(s) = "<<personnes;
}

Rdv::Rdv(const Rdv& r):Evt1jDur(r.getDate(), r.getDescription(), r.getDuree(), r.getHoraire()), lieu(r.getLieu()), personnes(r.getPersonnes()){}
const Rdv& Rdv::operator=(const Rdv& r){
   this->date = r.getDate();
   this->sujet = r.getDescription();
   this->duree = r.getDuree();
   this->horaire = r.getHoraire();
   this->lieu = r.getLieu();
   this->personnes = r.getPersonnes();
   return *this;

}




