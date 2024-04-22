//
// Created by Alessandro Formato on 21.04.2024.
//

#ifndef LISTAPIATTAFORMETV_PIATTAFORMA_H
#define LISTAPIATTAFORMETV_PIATTAFORMA_H

#include <string>
#include <vector>
#include <iostream>

#include "Utente.h"

using std::string;
using std::cout;
using std::endl;

class Piattaforma{
private:
    const string nome;
    double prezzoAnnuo;
    std::vector<Utente> utenti;

public:
    Piattaforma(string name, double annualPrice, std::vector<Utente> users = std::vector<Utente>());

    string getNome() const;
    double getPrezzoAnnuo() const;
    double getPrezzoMensile() const;
    double getCostoPersona() const;

    void addUtente(Utente& u);
    bool resetList();


    void stampa() const;
    void stampaResoconto() const;
};


#endif //LISTAPIATTAFORMETV_PIATTAFORMA_H