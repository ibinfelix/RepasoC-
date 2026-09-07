#pragma once
class Punto{
    double x,y;
    
    public:
        Punto(); Punto(double a, double b);
        double distanciaAlOrigen() const;
        void imprimir() const;
};