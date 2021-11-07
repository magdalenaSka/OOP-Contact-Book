#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa:: rejestracjaUzytkownika(){

    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow(){

    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika(){

    uzytkownikMenadzer.logowanieUzytkownika();

    //??????
    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany()) {
        adresatMenadzer = new AdresatMenadzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa:: zmianaHaslaZalogowanegoUzytkownika(){

    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa:: wylogowanieUzytkownika(){

    uzytkownikMenadzer.wylogowanieUzytkownika();
    delete adresatMenadzer;
    adresatMenadzer = NULL;
}

void KsiazkaAdresowa :: dodajAdresata(){

    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany()) {
        adresatMenadzer->dodajAdresata();
    } else {
        cout << "Przed dodaniem adresata nalezy sie zalogowac!" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa :: wyswietlWszystkichAdresatow(){

    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany()) {
        adresatMenadzer->wyswietlWszystkichAdresatow();
    } else {
        cout << "Przed wyswietleniem adresatow nalezy sie zalogowac!" << endl;
        system("pause");
    }
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany() {
    uzytkownikMenadzer.czyUzytkownikJestZalogowany();
}
