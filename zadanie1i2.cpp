#include <iostream>

using namespace std;

class DaneKomputery {
private:
    string marka;
    string model;
public:
    void setMarka(string m) {
        marka = m;
    }
    void setModel(string m) {
        model = m;
    }
    string getMarka() {
        return marka;
    }
    string getModel() {
        return model;
    }
};

class KomputerStacjonarny : public DaneKomputery {
private:
    string obudowa_rodzaj;
public:
    void setObudowa(string o) {
        obudowa_rodzaj = o;
    }
    string getObudowa() {
        return obudowa_rodzaj;
    }
};

class Laptop : public DaneKomputery {
private:
    string obudowa_kolor;
    float ekran_przekatna;
public:
    void setKolor(string kolor) {
        obudowa_kolor = kolor;
    }
    string getKolor() {
        return obudowa_kolor;
    }
    float getPrzekatna() {
        return ekran_przekatna;
    }
    void setPrzekatna(float przekatna) {
        ekran_przekatna = przekatna;
    }
};


int main()
{
    Laptop l1;
    string a, b, c;
    float d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    l1.setMarka(a);
    l1.setModel(b);
    l1.setKolor(c);
    l1.setPrzekatna(d);

    cout << l1.getMarka() << endl << l1.getModel() << endl << l1.getKolor() << endl << l1.getPrzekatna() << endl;
    return 0;
}