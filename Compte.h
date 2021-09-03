//
// Created by eric on 03/09/2021.
//

#ifndef TP2_BANQUE_COMPTE_H
#define TP2_BANQUE_COMPTE_H


class Compte {
private:
    int numero;
    float solde;

public:
    Compte(int numero);
    void depot(float valeur);
    void retrait(float valeur);
    float getSolde();
    void afficherSolde();
    void virer(float valeur,Compte &destinataire);

};


#endif //TP2_BANQUE_COMPTE_H
