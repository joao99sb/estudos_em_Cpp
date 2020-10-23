#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
  ifstream arquivoE; // leitura de arquivos

  string linha;
  arquivoE.open("teste.txt");
  if (arquivoE.is_open()){
    while (getline(arquivoE,linha)){
      cout<<linha<<endl;
    }
    arquivoE.close();
  }else{
    cout<<"nao foi possivel abrir o arquivo";
  }
  
  


  return 0;
}
