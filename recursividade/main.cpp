#include <iostream>
#include<stdlib.h>
#include <string.h>
using namespace std;

int Fatorial(int x){
  if(x > 0){
    return x*Fatorial(x-1);
  }else
  {
    return 1;
  }
  
}
int Fibonacci(int x){
  if (x==1 || x ==2)
  {
    return 1;
  }else
  {
    return Fibonacci(x - 1) + Fibonacci(x-2);
  }  
}
void Fibonacci2 (int x){

  cout<<"\n";
  for (int i = 1; i < x+1 ; i++)
  {
    cout<<Fibonacci(i)<<endl;
  }
  
}

void Fatorial2(int x){
  cout<<"\n";
  for (int i = 1; i < x+1 ; i++)
  {
    cout<<Fatorial(i)<<endl;
  }
  
}

int main(int argc, char const *argv[])
{


  int n = 0;
  if(argc == 1){
    cout<<"digite -h ou -help para ajuda"<<endl;
    return 0;
  }if (argc == 2)
  {
    if(!strcmp(argv[1],"fibonacci")){
      cout<<"escolha um numero"<<endl;
      cin>>n;
      cout<<"\n"<<Fibonacci(n)<<endl;
      
      return 0;
    }if (!strcmp(argv[1],"fatorial"))
    {
      
      cout<<"escolha um numero"<<endl;
      cin>>n;
      cout<<"\n"<<Fatorial(n)<<endl;
      
      return 0;
    }
    if (!strcmp(argv[1],"teste"))
    {
      cout<<"bem-vindo a zona de testes"<<endl;
      cin>>n;
      for (int i = 0; i < n+1; i++)
      {
        cout<<i<<endl;
      }
      
    }if (!strcmp(argv[1],"-h" ) || !strcmp(argv[1],"-help"))
    {
      cout<<"\n"<<"escolha a funcao fibonacci ou fatorial passando seu nome como parametro"<<endl
      <<"se quiser saber todos os numeros anteriores da sequencia passe o paremetro -t depois do nome da funcao"<<"\n";
      return 0;
    }else
    {
      cout<<"digite -h ou -help para ajuda"<<endl;   
      return 0; 
    }
    
  }if (argc == 3)
  {
    if (!strcmp(argv[1],"fibonacci") && !strcmp(argv[2],"-t"))
    {
      cout<<"escolha um numero"<<endl;
      cin>>n;
      Fibonacci2(n);
      return 0;
    }if (!strcmp(argv[1],"fatorial") && !strcmp(argv[2],"-t") )
    {
      cout<<"escolha um numero"<<endl;
      cin>>n;
      Fatorial2(n);
      return 0 ;
    }else  
    {
      cout<<"digite -h ou -help para ajuda"<<endl;
      
      return 0;
    }  
    
  }else
  {
    cout<<"digite -h ou -help para ajuda"<<endl;
      
    return 0;
  }
  

  
  

  
  
}
