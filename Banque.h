//
// Created by eric on 14/09/2021.
//

#ifndef TP2_BANQUE_BANQUE_H
#define TP2_BANQUE_BANQUE_H


#include "Client.h"

class Banque {
private:
    Client clients[100];
    int nbclients;

public:
    Banque();
    void ajouterClient( const string &nomduclient);
    void bilanClient(int numero);
    void afficherBilan();

    Client *getClients() ;
};


#endif //TP2_BANQUE_BANQUE_H
