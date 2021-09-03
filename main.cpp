#include <iostream>
#include "Compte.h"
using namespace std;
int main() {
    Compte compte=Compte(21);
    compte.depot(50.12);
    compte.afficherSolde();
    compte.retrait(10.11);
    compte.afficherSolde();
    cout<<compte.getSolde();
    Compte c1=Compte(36024);
    compte.virer(20,c1);
    compte.afficherSolde();
    c1.afficherSolde();
    return 0;
}
