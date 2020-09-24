#include <iostream>
using namespace std;

class Car{
  private:
  string n = "ta funcionando";
  int a;


  public:
  Car(int p){
    this->a = p;
    
  }
  void teste(){
    cout<<a;
  };
};

