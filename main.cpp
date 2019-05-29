#include <iostream>
#include "evenement.h"
using namespace std;
using namespace Time;
int main () {
    evenement e1(Date(4,10,1957),"Oumaima");
    e1.afficher();
    evenement e2(Date(4,10,99),"Mohamed");
    e2.afficher();
}