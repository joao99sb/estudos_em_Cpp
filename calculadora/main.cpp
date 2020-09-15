#include<iostream>
#include <stdlib.h>
using namespace std;

double Calc(int n, int x, int y){
    if(n == 1){
        return x + y;
    }if (n == 2)
    {
        return x - y;
    }if (n == 3)
    {
       return x*y;
    }if (n == 4)
    {
        return x/y;
    }if (n == 5)
    {
        return x % y;
    }    
}

int  main(){
    double x,y;
    int n;
    cout<<"escolha um numero"<<endl;
    cin>>x;
    cout<<"escolha outro numero"<<endl;
    cin>>y;
    cout<<"escolha uma das operacoes abaixo:"<<endl
        <<"1: somar"<<endl
        <<"2: subtrair"<<endl
        <<"3: multiplicar"<<endl
        <<"4: dividir"<<endl
        <<"5: resto da divisao"<<endl;
    cin>>n;
    cout<<Calc(n,x,y)<<endl;
    system("pause");
}