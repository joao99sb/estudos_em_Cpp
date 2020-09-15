#include <stdlib.h>
#include <iostream>
using namespace std;

/**
    short - diminui a capacidade de armazenamento
    long - aumenta a quantidade de armazenamento 
    signed - variavel contendo numeros positivos ou negativos
    unsigned - somente numeros positivos 
*/

int main(){
    int a = 0;
    short int b = 0;
    long double c = 0; // o long nao autela o tamanho do tipo inteiro 

    cout<< sizeof(a)<<endl;
    cout<< sizeof(b)<<endl;
    cout<< sizeof(c)<<endl;

    system("pause");
}
