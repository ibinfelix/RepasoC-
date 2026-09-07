#include<iostream>
class Figura {
public:
    virtual double area() const { return 0.0; }
    virtual ~Figura() = default;
};
class Circulo : public Figura {
    double r_;
public:
    Circulo(double r) : r_(r) {}
    double area() const override { return 3.14159 * r_ * r_; }
};

int main(){
    Circulo c(2.0);
    Figura* f = &c;
    std::cout << c.area();
    std::cout << f->area();
    return 0;
}