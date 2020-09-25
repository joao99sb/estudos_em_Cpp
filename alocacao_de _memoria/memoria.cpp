#include <iostream>
#include <stdio.h> //funcao gets
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{

  char *name;
  name =(char *) malloc(sizeof(char)+1);
  gets(name);

  cout << name <<"\n";
  system("pause");
  return 0;
}
