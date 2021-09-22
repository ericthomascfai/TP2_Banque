//
// Created by eric on 14/09/2021.
//


#include <iostream>
#include "Banque.h"
/*********************ajoute un client dans le tableau clients***********/
void Banque::ajouterClient(const string &nomduclient) {
    clients.push_back(Client(nomduclient));
    cout<<"le client "<<nomduclient<<" a été ajouté"<<endl;

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
            opclient(choix("client",clients.size()));
            break;

        case 3:
            afficherBilan();
            break;

        default:
            cout<<"Erreur de saisie";

    }
    interaction(); //Récursivité
}
void Banque::opclient(int numcli) {
    int saisie=0;
    cout<<"1-Créer un compte\n";
    cout<<"2-Créditer\n";
    cout<<"3-Débiter\n";
    cout<<"4-Virer\n";
    cout<<"5-Afficher un bilan\n";
    cout<<"6-Retour au menu principal\n";
    cin>>saisie;
    switch (saisie)
    {
        case 1:
            clients[numcli].ajouterCompte();
            break;
        case 2:
            clients[numcli].getComptes()[choix("compte",clients[numcli].getComptes().size())].depot(this->choixMontant());
            break;
        case 3:
            clients[numcli].getComptes()[choix("compte",clients[numcli].getComptes().size())].retrait(this->choixMontant());
            break;

        case 4:
            clients[numcli].getComptes()[choix("compte",clients[numcli].getComptes().size())].
                    virer(choixMontant(),clients[choix("client",clients.size())].
                    getComptes()[choix("compte",clients[numcli].getComptes().size())]);
            break;

        case 5:

            bilanClient(numcli);
            break;

        case 6:
            this->interaction();
            break;



    }

    opclient(numcli);

}



string Banque::saisieClient() {
    cin.ignore(256, '\n'); //ignore les précédents cin pour le bon fonctionnement du getline
    string saisie="";
    cout<<"Veuillez saisir un nom\n";
    getline(cin,saisie);
    return saisie;
}
int Banque::choix(string type,int limit) {
    int saisie=0;
    cout<<"****************Liste des "<<type<<"s disponibles*******************"<<endl;
    for(int i=0;i<limit;i++)
    {   if(type=="client")
            cout<<i<<")"<<clients[i].getNom()<<endl;
        else
            cout<<i<<")"<<endl;
    }
    cout<<"*****************************************************************"<<endl;
    cout<<"Veuillez choisir un "<<type<<endl;
    cin>>saisie;
    return saisie;

}

float Banque::choixMontant() {
    float montant;
    cout << "Veuillez donner un montant";
    cin >> montant;
    return montant;
}

vector<Client> &Banque::getClients()  {
    return clients;
}


