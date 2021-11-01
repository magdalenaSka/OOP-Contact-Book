#pragma once

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

#include "Adresat.h"

using namespace std;

class AdresatMenadzer {

    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;

    Adresat podajDaneNowegoAdresata();
    string wczytajLinie();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    int pobierzIdNowegoAdresata();

public:

    Adresat adresat;
    vector <Adresat> adresaci;
    int dodajAdresata();
    void wyswietlWszystkichAdresatow();
};
