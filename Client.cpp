//
// Created by eric on 13/09/2021.
//

#include <iostream>
#include "Client.h"

string Client::getNom() {
    return nom;
}

float Client::getSolde(int numero)  {
    int somme=0;
    for(Compte c:comptes)
    {
        somme+=c.getSolde();
    }
    return somme;
}

void Client::afficherSolde(int numero) {
    cout<<"Client "<<nom<<" ";
    comptes[numero].afficherSolde();
}

Client::Client(string nom): nom(nom) {
//compte=Compte(numero);
//this->nom=nom;
}

void Client::ajouterCompte() {
comptes.push_back(Compte(comptes.size())); //remplissage du tableau à la case d'indice nbcomptes

}



Client::Client() {

}



 vector<Compte> &Client::getComptes()  {
    return comptes;
}
