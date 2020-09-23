#include<iostream>
using namespace std;


/*
ponteiros sao armazenadores de endereço de variaveis

*/

int part1(){
  int num = 5, num2=2;

  int *p = &num;
  int *p2 = &num2;


  cout<<p<<endl
  <<*p2;
  return 0;
}

int part2(){

  int *p;
  int vetor[8];

  p = &vetor[0]; // p = vetor
  cout<<p<<endl;

  p=&vetor[1];
  cout<<p<<endl;
  
  *(p+=1); // pula para o proximo espaco na memoria
  cout<<p<<endl;
  *(p+=1);
  cout<<p<<endl;


  p = &vetor[6];
  *p=12;
  cout<<vetor[6]<<endl;
  *(p++);
  *p=14;
  cout<<vetor[7]<<endl;
  


  return 0;

}


int main(int argc, char const *argv[])
{

  part2();

  return 0;
}
