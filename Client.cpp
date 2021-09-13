//
// Created by eric on 13/09/2021.
//

#include "Client.h"

string Client::getNom() {
    return nom;
}

float Client::getSolde(int numero)  {
    return comptes[numero].getSolde();
}

void Client::afficherSolde(int numero) {
    comptes[numero].afficherSolde();
}

Client::Client(string nom): nom(nom),nbcomptes(0) {
//compte=Compte(numero);
//this->nom=nom;
}

void Client::ajouterCompte() {
comptes[nbcomptes]= Compte(nbcomptes); //remplissage du tableau à la case d'indice nbcomptes
nbcomptes++; //on passe à la case suivante
}

Compte *Client::getComptes() {
    return comptes;
}
