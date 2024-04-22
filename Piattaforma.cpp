//
// Created by Alessandro Formato on 21.04.2024.

#include <string>

#include "Piattaforma.h"

using std::string;
using std::cout;
using std::endl;

Piattaforma::Piattaforma(string name, double annualPrice, std::vector<Utente> users)
        : nome{name}
        , prezzoAnnuo{annualPrice}
        , utenti{users} {
}

string Piattaforma::getNome() const{
    return nome;
}

double Piattaforma::getPrezzoAnnuo() const{
    return prezzoAnnuo;
}

double Piattaforma::getPrezzoMensile() const{
    return prezzoAnnuo/12;
}

double Piattaforma::getCostoPersona() const{
    return prezzoAnnuo/utenti.size();
}

void Piattaforma::addUtente(Utente& u){
    utenti.push_back(u);
}

bool Piattaforma::resetList(){
    utenti.clear();
    if (!utenti.empty())
        return false;
    return true;
}

void Piattaforma::stampa() const{
    cout << nome << ": " << prezzoAnnuo << endl;
    cout << "Attualmente conta: " << utenti.size() << " iscritti." << endl;
}

void Piattaforma::stampaResoconto() const {
    stampa();
    cout << "Ogni membro deve pagare: " << getCostoPersona() << "" << endl;
}