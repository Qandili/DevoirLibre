#include <iostream>
#include <stdio.h>
using namespace std;
class Date{
    int jour, mois, annee;
    public :
    Date(int j, int m, int a):jour(j),mois(m),annee(a){};
    friend ostream &operator<<(ostream &out,Date const& d );
};
class Horaire{
    int heure;
    int minute;
    public :
    Horaire(int h, int m):heure(h),minute(m){};

    friend ostream &operator<<(ostream &out,Horaire const& H );
};

class Duree{
    int heure;
    int minute;
    public :
    Duree(int h, int m):heure(h),minute(m){};
    Duree(int m):heure(0),minute(m){};

    friend ostream &operator<<(ostream &out,Duree const& d );
};


