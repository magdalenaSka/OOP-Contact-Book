#pragma once

#include <iostream>
#include <vector>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "UzytkownikMenadzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenadzer {

    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;

    PlikZAdresatami plikZAdresatami;
    vector <Adresat> adresaci;
    Adresat podajDaneNowegoAdresata();

public:

    AdresatMenadzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
};
