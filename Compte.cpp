//
// Created by eric on 03/09/2021.
//

#include <iostream>
#include <iomanip>
#include "Compte.h"

using namespace std;
Compte::Compte(int numero) {
    this->numero=numero;

}

void Compte::depot(float valeur) {
    solde+=valeur;
}

void Compte::retrait(float valeur) {
    solde-=valeur;
}

float Compte::getSolde() {
    return solde;
}

void Compte::afficherSolde() {
    cout<<"Le solde du compte numéro "<<numero<<" est de "<<fixed<<setprecision(2)<<solde<<endl;
}
