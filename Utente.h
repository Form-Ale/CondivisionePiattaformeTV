//
// Created by Alessandro Formato on 21.04.2024.
//

#ifndef LISTAPIATTAFORMETV_UTENTE_H
#define LISTAPIATTAFORMETV_UTENTE_H

#include <string>

using std::string;

class Utente {
private:
    const string nome;
    string cognome;

public:
    Utente(string name, string surname);

    string getIdentity();
};


#endif //LISTAPIATTAFORMETV_UTENTE_H

