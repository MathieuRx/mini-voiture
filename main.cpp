#include "CVehicule.h"
#include "CProximite.h"

int main()
{

    // creation objet CVehicule en dynamique 
    CVehicule *vehicule1=new CVehicule();

   // Lance le vehicule
    vehicule1->start();

    return 0;
}
