//
// Created by eric on 13/09/2021.
//

#ifndef TP2_BANQUE_CLIENT_H
#define TP2_BANQUE_CLIENT_H


#include <string>
#include "Compte.h"
using namespace std;
class Client {

private:
    Compte compte;
    string nom;
public:
    Client(string nom,int numero);
    string getNom();
    float getSolde();
    void afficherSolde();

};


#endif //TP2_BANQUE_CLIENT_H
