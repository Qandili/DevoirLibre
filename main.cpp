#include <iostream>
#include "evenement.h"

int main()
{
    using namespace std;
    using namespace TIME;
    Evt1j e1(Date(16,12,1998), "Oumaima");
    Evt1j e2(Date(14,6,2019), "Mohamed");
    Evt1jDur e3(Date(14,6,2019), "lancement", Duree(0,10),Horaire(17,38));
    Rdv e4(Date(11,6,2013), "lancement", Duree(60),Horaire(17,38), "Intervenants UV", "bureau" );

    e1.afficher();
    e2.afficher();
    e3.afficher();
    e4.afficher();

    cout << "\n*****************\n" <<endl;

    Evt1j* ptr1 = &e1;
    Evt1j* ptr2 = &e2;
    Evt1j* ptr3 = &e3;
    Evt1j* ptr4 = &e4;
    ptr1->afficher();
    ptr2->afficher();
    ptr3->afficher();
    ptr4->afficher();
    return 0;
}
