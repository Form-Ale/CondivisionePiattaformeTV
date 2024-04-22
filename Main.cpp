//
// Created by Alessandro Formato on 22.04.2024.
//
#include <iostream>
#include <string>

#include "Piattaforma.h"
#include "Utente.h"

using std::string;
using std::cout;
using std::endl;


int main() {
    Utente* guedes{new Utente{"David", "Guedes"}};
    Utente* roberto{new Utente{"Roberto", "Formato"}};
    Utente* kevin{new Utente{"Kevin", "Salsi"}};
    Utente* alessandro{new Utente{"Alessandro", "Formato"}};
    Utente* hakim{new Utente{"Hakim", "Invernizzi"}};

    Piattaforma* netflix{new Piattaforma("Netflix", (36.70 * 12))};
    Piattaforma* disneyPlus{new Piattaforma("Disney+", 179.00)};
    Piattaforma* crunchyroll{new Piattaforma("Crunchyroll", 100.00)};
    Piattaforma* expressVPN{new Piattaforma("ExpressVPN", 108)};

    netflix->addUtente(*guedes);
    netflix->addUtente(*alessandro);
    netflix->addUtente(*roberto);

    netflix->stampaResoconto();


    return 0;
}