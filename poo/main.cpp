#include <iostream>
#include "Aviao.h"
using namespace std;





int main()
{
  Aviao *avi = new Aviao(2); 


  
  avi->vel = 3;
  avi->show();
  return 0;
}
