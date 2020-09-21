#include<iostream>
#include<stdlib.h>
using namespace std;


struct pessoa{
  string name;
  string sobrenome;
  int idade;
  string cpf;
};


int main(){
  pessoa pessoa1;
  pessoa1.name = "joao";
  pessoa1.sobrenome = "victor";
  pessoa1.idade = 21;
  pessoa1.cpf = '12121212';
  cout<<pessoa1.sobrenome<<endl;
  system("pause");
  return 0;
}