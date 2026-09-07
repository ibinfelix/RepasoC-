#include "punto.h"
#include <cmath>
#include <iostream>

Punto::Punto() : x(0), y(0) {};
Punto::Punto(double a, double b) : x(a), y(b) {};
double Punto::distanciaAlOrigen() const{
    return sqrt(x*x + y*y);
};
void Punto::imprimir() const{
    std::cout <<"("<<x<<", "<<y<<")"<<std::endl;
}