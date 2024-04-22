//
// Created by Alessandro Formato on 21.04.2024.
//

#include "Utente.h"
#include <string>

using std::string;

Utente::Utente(string name, string surname)
        : nome{name}
        , cognome{surname}{
}

string Utente::getIdentity(){
    return nome + " " + cognome;
}