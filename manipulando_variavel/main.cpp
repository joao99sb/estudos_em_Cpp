#include <iostream>
#include <stdlib.h>
using namespace std;


int main(){
    int _int = 100;
    char c ='r';
    double y =5.999;
    
    cout<<"o valor da variavel é:"<< _int <<endl;
    cout<<"o valor da variavel é:"<< c <<endl;
    cout<<"o valor da variavel é:"<< y <<endl;

    cout<<"tamanho da variavel na memoria:"<<sizeof(_int)<<" byte"<<endl;
    cout<<"tamanho da variavel na memoria:"<<sizeof(c)<<" byte"<<endl;
    cout<<"tamanho da variavel na memoria:"<<sizeof(y)<<" byte"<<endl;
    // 1 byte sao 8 bits
    

    system("pause");
    return 0;
}