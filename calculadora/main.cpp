#include<iostream>
#include <stdlib.h>
using namespace std;





double Calc(int n, double x , double y){
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
    }else
    {
        return 0 ;
    }
    
     
}

int  main(){
    double x,y;
    int n;
    cout<<"escolha um numero"<<endl;
    cin>>x;
    cout<<"escolha outro numero"<<endl;
    cin>>y;
    do
    {
        cout<<"escolha uma das operacoes abaixo:"<<endl
        <<"1: somar"<<endl
        <<"2: subtrair"<<endl
        <<"3: multiplicar"<<endl
        <<"4: dividir"<<endl
        <<"5 para sair"<<endl;
        
        cin>>n;

        if(n ==1 || n==2 || n==3 || n==4 || n == 5){
            if(Calc(n,x,y)==0){
                cout<<"tchau"<<endl;
            }else
            {
                cout<<Calc(n,x,y)<<endl;
                
            }
            
        }else
        {
            cout<<"numero invalido"<<endl;
        }
            
        

    } while (n!=5);
    return 0;
    system("pause");
}