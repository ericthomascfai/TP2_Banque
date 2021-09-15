#include <iostream>
#include "Compte.h"
#include "Client.h"
#include "Banque.h"

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

    /*Client client=Client("Jean");
    client.ajouterCompte();
    client.getComptes()[0].depot(10);
    client.afficherSolde(0);
    cout<<client.getComptes()[0].getSolde()<<endl;
    cout<<client.getNom()<<endl;*/
    /***********************code de test de la classe banque***********************/
    Banque banque=Banque();
    banque.interaction();
    /*banque.ajouterClient("Paul");
    banque.getClients()[0].ajouterCompte();
    banque.getClients()[0].getComptes()[0].depot(100);
    banque.getClients()[0].ajouterCompte();
    banque.getClients()[0].getComptes()[1].depot(50);
    //banque.bilanClient(0);
    banque.ajouterClient("Bigshow");
    banque.getClients()[1].ajouterCompte();
    banque.getClients()[1].getComptes()[0].depot(100);
    banque.afficherBilan();*/

    return 0;
}
