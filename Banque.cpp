//
// Created by eric on 14/09/2021.
//


#include <iostream>
#include "Banque.h"
/*********************ajoute un client dans le tableau clients***********/
void Banque::ajouterClient(const string &nomduclient) {
    clients[nbclients]=Client(nomduclient);
    nbclients++;
}
/**************affiche le bilan d'un client******************************/
void Banque::bilanClient(int numero) {

    for(int i=0;i<clients[numero].getNbcomptes();i++) //pour i allant de 0 au nombre de comptes
    {
        clients[numero].afficherSolde(i); //on affiche le solde pour chaque comptes
    }

}
/**************appel afficher bilan pour tous les clients****************/
void Banque::afficherBilan() {
    for(int i=0;i<nbclients;i++)
    {
        bilanClient(i);
    }
}
/***************************Constructeur*********************************/
Banque::Banque():nbclients(0) {

}

 Client *Banque::getClients()  {
    return clients;
}
