#if !defined(_EVENEMENT_H)
#define _EVENEMENT_H
#include <iostream>
#include <string>
#include "timing.h"
namespace TIME{
    class Evt1j{
    private:
        public:
        Date date;
        std::string sujet;
        public:
        Evt1j(const Date& d, const std::string& s);
        const std::string& getDescription() const;
        const Date& getDate() const;
        virtual void afficher(std::ostream& f=std::cout) const;
        virtual ~Evt1j();
        virtual ostream& operator<<(ostream& out);
    };


    class Evt1jDur:public Evt1j{
        public:
        Horaire horaire;
        Duree duree;
        public:
        Evt1jDur(const Date& d, const std::string& s, const Duree& duree, const Horaire& h);
        const Horaire& getHoraire() const;
        const Duree& getDuree() const;
        void afficher(std::ostream& f=std::cout) const;
        virtual ~Evt1jDur();
    };


    class Rdv: public Evt1jDur{
    public:
        std::string lieu;
        std::string personnes;
        public:
        Rdv(const Date& d, const std::string& s, const Duree& dur, const Horaire& h, const std::string& l, const std::string& p);
        const std::string& getLieu() const;
        const std::string& getPersonnes() const;
        void afficher(std::ostream& f=std::cout) const;
        ~Rdv();
        Rdv(const Rdv& r);
        const Rdv& operator=(const Rdv& r);
    };


}
#endif
