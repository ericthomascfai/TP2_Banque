//
// Created by eric on 14/09/2021.
//


#include <iostream>
#include "Banque.h"
/*********************ajoute un client dans le tableau clients***********/
void Banque::ajouterClient(const string &nomduclient) {
    clients.push_back(Client(nomduclient));

}
/**************affiche le bilan d'un client******************************/
void Banque::bilanClient(int numero) {

    for(int i=0;i<clients[numero].getComptes().size();i++) //pour i allant de 0 au nombre de comptes
    {
        clients[numero].afficherSolde(i); //on affiche le solde pour chaque comptes
    }

}
/**************appel afficher bilan pour tous les clients****************/
void Banque::afficherBilan() {
    for(int i=0;i<clients.size();i++)
    {
        bilanClient(i);
    }
}
/***************************Constructeur*********************************/
Banque::Banque() {

}
void Banque::interaction() {
    int saisie=0;
    cout<<"Quel opération voulez-vous effectuer?"<<endl;
    cout<<"1-Ajouter un client"<<endl;
    cout<<"2-Effectuer une opération sur un client"<<endl;
    cout<<"3-Afficher un bilan général"<<endl;
    cin>>saisie;
    switch (saisie)
    {
        case 1:
            ajouterClient(saisieClient());
            break;

        case 2:

            break;

        case 3:
            afficherBilan();
            break;



    }

    interaction(); //Recursivité
}

string Banque::saisieClient() {
    cin.ignore(256, '\n'); //ignore les précédents cin pour le bon fonctionnement du getline
    string saisie="";
    cout<<"Veuillez saisir un nom\n";
    getline(cin,saisie);
    return saisie;
}
vector<Client> &Banque::getClients()  {
    return clients;
}


