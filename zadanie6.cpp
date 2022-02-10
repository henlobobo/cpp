#include <iostream>

using namespace std;

class DaneSamochody {
private:
  string marka, model;
  int rokProdukcji;
public:
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
  inline string getMarka(){
    return this->marka;
  }
  inline string getModel(){
    return this->model;
  }
  inline int getRokProdukcji(){
    return this->rokProdukcji;
  }
  inline void setMarka(string marka){
    this->marka = marka;
  }
  inline void setModel(string model){
    this->model = model;
  }
  inline void setRokProdukcji(int rokProdukcji){
    this->rokProdukcji = rokProdukcji;
  }
};

class Tir : public DaneSamochody {
private:
  bool wywrotka, chlodnia, cysterna;
public:
  Tir() : DaneSamochody(){
    this->wywrotka = false;
    this->cysterna = false;
    this->chlodnia = true;
  }
  Tir(string marka, string model, int rokProdukcji, bool a, bool b, bool c) : DaneSamochody(marka, model, rokProdukcji){
    this->wywrotka = a;
    this->cysterna = b;
    this->chlodnia = c;  
  }
  inline bool isWywrotka(){
    return this->wywrotka;
  }
  inline bool isChlodnia(){
    return this->chlodnia;
  }
  inline bool isCysterna(){
    return this->cysterna;
  }
  inline void setWywrotka(bool wywrotka){
    this->wywrotka = wywrotka;
  }
  inline void setCysterna(bool cysterna){
    this->cysterna = cysterna;
  }
  inline void setChlodnia(bool chlodnia){
    this->chlodnia = chlodnia;
  }
};

class Bus : public DaneSamochody {
private:
  int stojacy, siedzacy;
public:
  Bus() : DaneSamochody() {
    this->stojacy = 50;
    this->siedzacy = 50;
  }
  Bus(string marka, string model, int rokProdukcji, int stojacy, int siedzacy) : DaneSamochody (marka, model, rokProdukcji){
    this->stojacy = stojacy;
    this->siedzacy = siedzacy;
  }
  void opis(){
    cout << getMarka() << " " << getModel() << " " << getRokProdukcji() << " " << this->stojacy << " " << this->siedzacy << endl;
  }
  inline int getStojacy(){
    return this->stojacy;
  }
  inline int getSiedzacy(){
    return this->siedzacy;
  }
  inline void setStojacy(int stojacy){
    this->stojacy = stojacy;
  }
  inline void setSiedzacy(int siedzacy){
    this->siedzacy = siedzacy;
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