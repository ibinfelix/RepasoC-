#include "punto.h"
#include <iostream>

int main(){
    Punto p = Punto(-1,3.1416);
    std::cout<<"Punto Creado en:"<<std::endl;
    p.imprimir();
    std::cout <<"Distancia al origen: "<<p.distanciaAlOrigen()<<std::endl;
    return 0;
}