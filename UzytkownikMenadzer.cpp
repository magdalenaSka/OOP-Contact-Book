#include "UzytkownikMenadzer.h"

void UzytkownikMenadzer::rejestracjaUzytkownika () {

    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

Uzytkownik UzytkownikMenadzer::podajDaneNowegoUzytkownika() {

    Uzytkownik uzytkownik;

    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    cout << ">>> DODAWANIE NOWEGO UZYTKOWNIKA<<<" << endl << endl;

    string login;
    do {
        cout << "Podaj login: ";
        cin >> login;
        uzytkownik.ustawLogin(login);

    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    string haslo;
    cout << "Podaj haslo: ";
    cin >> haslo;
    uzytkownik.ustawHaslo(haslo);

    return uzytkownik;
}

int UzytkownikMenadzer::pobierzIdNowegoUzytkownika() {

    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}

bool UzytkownikMenadzer::czyIstniejeLogin(string login) {

    for (int i=0; i<uzytkownicy.size(); i++) {

        if (uzytkownicy[i].pobierzLogin() == login) {

            cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
            return true;
        }
    }return false;
}


void UzytkownikMenadzer::wypiszWszystkichUzytkownikow() {

    for (int i=0; i<uzytkownicy.size(); i++) {

        cout << uzytkownicy[i].pobierzId() << endl;
        cout << uzytkownicy[i].pobierzLogin() << endl;
        cout << uzytkownicy[i].pobierzHaslo() << endl;
    }
}

void UzytkownikMenadzer::wczytajUzytkownikowZPliku(){

   uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
}

int UzytkownikMenadzer :: logowanieUzytkownika(){

    Uzytkownik uzytkownik;
    string login = "", haslo = "";

    cout << endl << "Podaj login: ";
    login = wczytajLinie();

    vector <Uzytkownik>::iterator itr = uzytkownicy.begin();
    while (itr != uzytkownicy.end())
    {
        if (itr -> pobierzLogin() == login)
        {
            for (int iloscProb = 3; iloscProb > 0; iloscProb--)
            {

                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = wczytajLinie();

                if (itr -> pobierzHaslo() == haslo)
                {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    system("pause");
                    idZalogowanegoUzytkownika = itr -> pobierzId();
                    return itr -> pobierzId();
                }
            }
            cout << "Wprowadzono 3 razy bledne haslo." << endl;
            system("pause");
            return 0;
        }
        itr++;
    }
    cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
    system("pause");
    return 0;
}

void UzytkownikMenadzer:: zmianaHaslaZalogowanegoUzytkownika(){

    string noweHaslo = "";
    cout << "Podaj nowe haslo: ";
    noweHaslo = wczytajLinie();

    for (vector <Uzytkownik>::iterator itr = uzytkownicy.begin(); itr != uzytkownicy.end(); itr++)
    {
        if (itr -> pobierzId() == idZalogowanegoUzytkownika)
        {
            itr -> ustawHaslo(noweHaslo);
            cout << "Haslo zostalo zmienione." << endl << endl;
            system("pause");
        }
    }
    uzytkownicy = plikZUzytkownikami.zapiszWszystkichUzytkownikowDoPliku(uzytkownicy);
}

string UzytkownikMenadzer:: wczytajLinie(){

    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}

void UzytkownikMenadzer:: wylogowanieUzytkownika(){

    idZalogowanegoUzytkownika = 0;
    cout << "Wylogowano uzytkownika" << endl;
    return;
}
