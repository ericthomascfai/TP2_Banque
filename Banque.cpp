//
// Created by eric on 14/09/2021.
//


#include <iostream>
#include "Banque.h"
/*********************ajoute un client dans le tableau clients***********/
void Banque::ajouterClient(const string &nomduclient) {
    clients.push_back(Client(nomduclient));

}
/**************affiche le bilan d'un client******************************/
void Banque::bilanClient(int numero) {

    for(int i=0;i<clients[numero].getComptes().size();i++) //pour i allant de 0 au nombre de comptes
    {
        clients[numero].afficherSolde(i); //on affiche le solde pour chaque comptes
    }

}
/**************appel afficher bilan pour tous les clients****************/
void Banque::afficherBilan() {
    for(int i=0;i<clients.size();i++)
    {
        bilanClient(i);
    }
}
/***************************Constructeur*********************************/
Banque::Banque() {

}

vector<Client> &Banque::getClients()  {
    return clients;
}


