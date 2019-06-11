#include "timing.h"
ostream &operator<<(ostream& out,Date const& d ) {
    out << d.jour << "/" << d.mois << "/" << d.annee;
    return out;
}
ostream &operator<<(ostream &out,Horaire const& H ){
    out << H.heure << "H" << H.minute << "min" <<endl;
    return out;
}

ostream &operator<<(ostream &out,Duree const& d ){
    out << d.heure << "H" << d.minute << "min" <<endl;
    return out;
}

