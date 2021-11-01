#include "Adresat.h"

void Adresat:: ustawIdAdresata (int noweIdAdresata){

    id = noweIdAdresata;
}

void Adresat:: ustawIdUzytkownika (int noweIdUzytkownika){

    idUzytkownika = noweIdUzytkownika;
}

void Adresat:: ustawImie (string noweImie){

    imie = noweImie;
}

void Adresat:: ustawNazwisko (string noweNazwisko){

    nazwisko = noweNazwisko;
}

void Adresat:: ustawNrTel (string nowyNrTel){

    numerTelefonu = nowyNrTel;
}

void Adresat:: ustawEmail (string nowyEmail){

    email = nowyEmail;
}

void Adresat:: ustawAdres (string nowyAdres){

    adres = nowyAdres;
}

int Adresat::pobierzIdAdresata(){

    return id;
}

int Adresat::pobierzIdUzytkownika(){

    return idUzytkownika;
}

string Adresat::pobierzImie(){

    return imie;
}

string Adresat::pobierzNazwisko(){

    return nazwisko;
}

string Adresat::pobierzNrTel(){

    return numerTelefonu;
}

string Adresat::pobierzEmail(){

    return email;
}

string Adresat::pobierzAdres(){

    return adres;
}

