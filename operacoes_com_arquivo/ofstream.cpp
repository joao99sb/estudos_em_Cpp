#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char const *argv[]){
  
  ofstream arquivoS; //saida de arquivo

  arquivoS.open("teste.txt",ios::app);// com o parametro ios::app ele n sobreescreve no arquivo
  arquivoS<<"\nmais ainda "; 
  arquivoS.close();
  arquivoS.open("oi.cs");
  arquivoS.close();
  return 0;
}
