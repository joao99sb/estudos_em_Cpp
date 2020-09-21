#include <iostream>
#include <stdlib.h>
#include<string.h>
using namespace std;


int main(int argc, char const *argv[])
{

  /*
    o argc indica quantos parametros foram passados 

    o primeiro item do argv é o nome do programa como padrao
    o segundo em diante sao os argumentos passados para a funcao mains o nome da funcao
  */


 /*
    a funcao strcmp compara duas strings e se elas forem iguais ela retorna 0 
    se forem diferentes ela retorna outra coisa 

    0 é lido como false para o c++
 
 */
 if (argc > 1)
 {
    if (!strcmp(argv[1],"-h") || !strcmp(argv[1],"-help"))
    {
      cout<<"ta precisando de ajudinha? hmmmmm boiola"<<endl;
      
      
    }else
    {
      cout<<"para listar os comandos digite -h ou -help"<<endl;
      
    }
    
 }
 else
 {
   cout<<"hummm"<<endl;
 }    
  return 0;
}

