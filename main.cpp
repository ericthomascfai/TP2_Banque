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
    return 0;
}
