//
// Created by eric on 14/09/2021.
//

#ifndef TP2_BANQUE_BANQUE_H
#define TP2_BANQUE_BANQUE_H

using namespace std;
#include "Client.h"
#include <vector>
class Banque {
private:
    vector<Client> clients;


public:
    Banque();
    void ajouterClient( const string &nomduclient);
    void bilanClient(int numero);
    void afficherBilan();
    vector<Client> &getClients();

    string saisieClient();

    void interaction();

    float choixMontant();

    int choix(string type, int limit);

    void opclient(int numcli);
};


#endif //TP2_BANQUE_BANQUE_H
