#include<iostream>
using namespace std; 



/*
  enum é um enumerador que atribui numeros inteiros a cada elemento e por padrao segue a ordem comecando do zero
  porem da para modificar o numero q o elemento possui e o proximo, se n estiver definido, vai ser um numero a mais
  que o anterior, ex: shotgun n esta definido entao sera o numero 13
*/

int main(int argc, char const *argv[])
{
  enum armas{fuzil, revolver=33, rifle=12, shotgun};
  
  int num;
  armas armaSel;
  armaSel = shotgun; 

  cout<<armaSel<<endl;

  return 0;
}
