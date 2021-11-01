//super szybki guard
#pragma once

#include <iostream>

#include "UzytkownikMenadzer.h"
#include "AdresatMenadzer.h"

using namespace std;

class KsiazkaAdresowa{

    UzytkownikMenadzer uzytkownikMenadzer;
    AdresatMenadzer adresatMenadzer;

public:

    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenadzer(nazwaPlikuZUzytkownikami){
    uzytkownikMenadzer.wczytajUzytkownikowZPliku();
    };

    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();

    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
};
