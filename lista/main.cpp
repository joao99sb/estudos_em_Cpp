#include <iostream>
#include <list>
#include<stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{

  list <int> aula;

  int tam = 10;

  list<int>::iterator it;



  for (int i = 0; i < tam; i++)
  {
    aula.push_front(i);
  }
  
  it = aula.begin();
  advance(it,5);
  aula.insert(it,13);


  int size = aula.size();
  aula.sort();
  aula.reverse();
  for (int i = 0; i <size ; i++)
  {
    cout<<aula.front()<<endl;
    aula.pop_front();
  }
  
  system("pause");

  return 0;
}
