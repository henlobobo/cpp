#include <iostream>

using namespace std;

class DanePracownik {
private:
    string imie;
    string nazwisko;
public:
    void setImie(string i) {
        imie = i;
    }
    void setNazwisko(string n) {
        nazwisko = n;
    }
    string getImie() {
        return imie;
    }
    string getNazwisko() {
        return nazwisko;
    }
};

class Dyrektor : public DanePracownik {
private:
    float staz_dyrektorski;
public:
    void setStaz(float s) {
        staz_dyrektorski = s;
    }
    float getStaz() {
        return staz_dyrektorski;
    }
};

class Sekretarka : public DanePracownik {
private:
    string czyja;
public:
    void setCzyja(string c) {
        czyja = c;
    }
    string getCzyja() {
        return czyja;
    }
};

class Nauczyciel : public DanePracownik {
private:
    string przedmiot;
public:
    void setPrzedmiot(string p) {
        przedmiot = p;
    }
    string getPrzedmiot() {
        return przedmiot;
    }
};

class Wychowawca : public Nauczyciel {
private:
    string klasa;
public:
    void setKlasa(string k) {
        klasa = k;
    }
    string getKlasa() {
        return klasa;
    }
};

int main()
{
    Wychowawca w1;
    w1.setImie("Katarzyna");
    w1.setNazwisko("Wokulska");
    w1.setKlasa("5etd");
    w1.setPrzedmiot("fizyka");

    cout << "Wychowawca " << w1.getImie() << " " << w1.getNazwisko() << " z klasy " << w1.getKlasa() << " uczy przedmiotu: " << w1.getPrzedmiot();
    return 0;
}