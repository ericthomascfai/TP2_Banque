//
// Created by eric on 13/09/2021.
//

#include "Client.h"

string Client::getNom() {
    return nom;
}

float Client::getSolde() {
    return compte.getSolde();
}

void Client::afficherSolde() {
    compte.afficherSolde();
}

Client::Client(string nom,int numero): compte(Compte(numero)),nom(nom) {
//compte=Compte(numero);
//this->nom=nom;
}
