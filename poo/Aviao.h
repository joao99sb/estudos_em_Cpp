 

#include <iostream>


class Aviao{
  private:


  public:

    int vel = 0;
    int velMax;
    std::string tipo;
    Aviao(int tp);
    void show();


};
  Aviao::Aviao(int tp ){ // tipo 1 = jato, tipo 2 = planador, tipo 3 = teco-teco
    if (tp == 1){
      this->velMax = 800;
      this->tipo = "jato";
    }if(tp == 2){
      this->velMax = 400;
      this->tipo= "planador";
    }if(tp == 3){
      this->velMax =  500;
      this->tipo = "teco-teco";
    }  
  };
  

void Aviao::show(){
  std::cout<<"velocidade maxima = "<<this->velMax<<std::endl;
  std::cout<<"tipo = "<<this->tipo<<std::endl;
}

