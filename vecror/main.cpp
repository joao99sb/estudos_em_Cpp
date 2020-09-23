#include <iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
  vector<int> num1,num2;
  int tam,i;
  

  num1.push_back(12);
  num1.push_back(2);
  num1.push_back(666);
  num1.push_back(69);

  num1.insert(num1.begin(),777);
  num1.erase(num1.end()-2);


  num2.push_back(1);
  num2.push_back(3);
  num2.push_back(4);
  num2.push_back(7);

  
  num1.swap(num2);  //troca os valores de um vector e troca com o de outro num1 passa a ser num2 e num2 a ser num1

  tam = num1.size();
  for (int i = 0; i < tam; i++)
  {
    cout<<num1[i]<<" ";
    
  }
  cout<<"\n";
  for (int i = 0; i < tam; i++)
  {
    cout<<num2[i]<<" ";
    
  }
  
  cout<<endl<<num2.front()<<endl;
  cout<<num2.at(2)<<endl;
  cout<<num2.back()<<endl;


  return 0;
}
