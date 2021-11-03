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

    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenadzer(nazwaPlikuZUzytkownikami), adresatMenadzer(nazwaPlikuZAdresatami){
    uzytkownikMenadzer.wczytajUzytkownikowZPliku();
    //adresatMenager.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    };

    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();

    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
};
