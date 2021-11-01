#pragma once

#include <iostream>
#include <sstream>

using namespace std;

class Adresat {

    int id, idUzytkownika;
    string imie, nazwisko, numerTelefonu, email, adres;

public:

    void ustawIdAdresata (int noweIdAdresata);
    void ustawIdUzytkownika(int noweIdUzytkownika);
    void ustawImie (string noweImie);
    void ustawNazwisko (string noweNazwisko);
    void ustawNrTel (string nowyNrTel);
    void ustawEmail (string noweEmail);
    void ustawAdres (string nowyAdres);

    int pobierzIdAdresata();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNrTel();
    string pobierzEmail();
    string pobierzAdres();

};
