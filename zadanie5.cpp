#include <iostream>

using namespace std;

class DaneSamochody {
public:
  string marka, model;
  int rokProdukcji;
  DaneSamochody(){
    this->marka = "a";
    this->model = "b";
    this->rokProdukcji = 2004;
  }
  DaneSamochody(string marka, string model, int rokProdukcji) {
    this->marka = marka;
    this->model = model;
    this->rokProdukcji = rokProdukcji;
  }
  void opis();
};

class Tir : public DaneSamochody {
public:
  bool wywrotka, chlodnia, cysterna;
  Tir() : DaneSamochody (){
    this->wywrotka = false;
    this->cysterna = false;
    this->chlodnia = true;
  }
  Tir(string marka, string model, int rokProdukcji, bool a, bool b, bool c) : DaneSamochody(marka, model, rokProdukcji){
    this->wywrotka = a;
    this->cysterna = b;
    this->chlodnia = c;  
  }
};

class Bus : public DaneSamochody {
public:
  int stojacy, siedzacy;
  Bus() : DaneSamochody () {
    this->stojacy = 50;
    this->siedzacy = 50;
  }
  Bus(string marka, string model, int rokProdukcji, int stojacy, int siedzacy) : DaneSamochody (marka, model, rokProdukcji){
    this->stojacy = stojacy;
    this->siedzacy = siedzacy;
  }
  void opis(){
    cout << this->marka << " " << this->model << " " << this->rokProdukcji << " " << this->stojacy << " " << this->siedzacy << endl;
  }
};

int main(){
  string a, b;
  int c, d, e;
  cin >> a >> b >> c >> d >> e;
  Bus bus(a, b, c, d, e);
  bus.opis();
  return 0;
}