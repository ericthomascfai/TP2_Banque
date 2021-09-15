//
// Created by eric on 13/09/2021.
//

#ifndef TP2_BANQUE_CLIENT_H
#define TP2_BANQUE_CLIENT_H


#include <string>
#include "Compte.h"
using namespace std;
#include <vector>
class Client {

private:
    vector<Compte> comptes;
    string nom;

public:
    Client();
    Client(string nom);
    string getNom();
    float getSolde(int numero);
    void afficherSolde(int numero);
    void ajouterCompte();



    vector<Compte> &getComptes();
};


#endif //TP2_BANQUE_CLIENT_H
