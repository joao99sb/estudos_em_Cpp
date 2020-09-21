#include <iostream>
#include<stdlib.h>

using namespace std;

int main(){
    double valores[7];

    for (int i = 0; i < 7; i++)
    {

    valores[i] = rand()%10;

    cout<<valores[i]<<endl;
    }
    
    int arrayStd[5] = {1,2,3,4,5};
    char letra[4] = {'2', 'a','r','d'};
    for (int i = 0; i < 5; i++)
    {
        cout<<letra[i]<<endl;
    }
    
    cout<<arrayStd[3]<<endl;

    system("pause");

}