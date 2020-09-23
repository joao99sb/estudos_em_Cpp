#include <iostream>
#include<stack>

using namespace std;

int main(int argc, char const *argv[])
{
  
  stack <string> cartas;

  cartas.push("rei copas");
  cartas.push("as de copas");
  cartas.push("as de espadas");
  
  cout<<cartas.size()<<endl;

  cout<<cartas.top()<<endl;

  cartas.pop();


  cout<<cartas.size();



  return 0;
}
