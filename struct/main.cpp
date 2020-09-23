#include<iostream>
using namespace std;

struct Carro {
  string name;
  string cor;
  int pot;
  float velMax;
  float velAtual = 0;


  void insere(string stdName, string stdCor, int stdPot, int stdVelMax){
    name = stdName;
    cor = stdCor;
    pot = stdPot;
    velMax = stdVelMax;
  }

  void acelerar(){    
    velAtual += 50;
    if (velAtual >= velMax){    
      velAtual=velMax;
    }
  }
};


int main(int argc, char const *argv[])
{
  
  Carro car;

  Carro *carros = new Carro[5];

  Carro car0, car1, car2,car3,car4;

  car.insere("uno","preto",500,300);



  carros[0] = car, carros[1] = car1, carros[2] =car2, carros[3]=car3,carros[4]=car4;

  carros[0].insere("volvo","branco",300,500);
  carros[1].insere("bmw","preto",500,320);  
  carros[2].insere("doge","preto",300,260);
  carros[3].insere("mclaren","laranja",916,350);
  carros[4].insere("fusca","azul",65,160);

  for (int i = 0; i < 5; i++)
  {
    cout<<carros[i].name<<endl;
  }
  

  // car.acelerar();
  // cout<<car.name;
  return 0;
}
