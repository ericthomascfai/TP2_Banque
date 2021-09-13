#include <iostream>
#include "Compte.h"
#include "Client.h"

using namespace std;
int main() {
    /*Compte compte=Compte(21);
    compte.depot(50.12);
    compte.afficherSolde();
    compte.retrait(10.11);
    compte.afficherSolde();
    cout<<compte.getSolde();
    Compte c1=Compte(36024);
    compte.virer(20,c1);
    compte.afficherSolde();
    c1.afficherSolde();*/
    /*************************code de test de la classe client******************/

    Client client=Client("Jean");
    client.ajouterCompte();
    client.getComptes()[0].depot(10);
    client.afficherSolde(0);
    cout<<client.getComptes()[0].getSolde()<<endl;
    cout<<client.getNom()<<endl;
    return 0;
}
