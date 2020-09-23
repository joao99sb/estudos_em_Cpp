#include <iostream>
#include<queue>
using namespace std;

int main(int argc, char const *argv[])
{ 
  queue <string>cartas;

  cartas.push("rei copas");
  cartas.push("as de copas");
  cartas.push("as de espadas");
  
  cout<<cartas.size()<<endl;

  cout<<cartas.front()<<endl;

  cartas.pop();


  cout<<cartas.size();
  return 0;
}
