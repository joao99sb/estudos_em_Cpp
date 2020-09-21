#include <iostream>
#include<stdlib.h>

using namespace std;

// f(x,y) = (3*(x+1) + y*y)
// (0<x<9) e (0<y<9)

int main(){
  int matrix[10][10] ={};
  for (int x = 0; x < 10; x++)
  {
    for (int y = 0; y < 10; y++)
    {
      matrix[x][y]= (3*(x+1) + y*y);

      string end = (y<9) ? ", " : "\n";

      cout<<matrix[x][y]<<end;
    }
    
  }
   
}