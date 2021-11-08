#pragma once

#include <iostream>
#include <sstream>

using namespace std;

class Adresat {

    int id, idUzytkownika;
    string imie, nazwisko, numerTelefonu, email, adres;

public:

    Adresat(int id = 0, int idUzytkownika = 0, string imie = "", string nazwisko = "", string numerTelefonu = "",
            string email = "", string adres = "") {
        this->id = id;
        this->idUzytkownika = idUzytkownika;
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->numerTelefonu = numerTelefonu;
        this->email = email;
        this->adres = adres;
    }

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
