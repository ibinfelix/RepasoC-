#include <iostream>
class Fraccion {
    int num_, den_;
public:
    Fraccion(int n = 0, int d = 1) : num_(n), den_(d) {}
    Fraccion operator+(const Fraccion& o) const;
    bool operator==(const Fraccion& o) const;
    bool operator<(const Fraccion& o) const;
    friend std::ostream& operator<<(std::ostream& os, const Fraccion& f);
};

Fraccion Fraccion::operator+(const Fraccion& o) const {
    return Fraccion(num_ * o.den_ + o.num_ * den_,
                    den_ * o.den_);        
}
bool Fraccion::operator==(const Fraccion& o) const {
    return num_ * o.den_ == o.num_ * den_;
}
bool Fraccion::operator<(const Fraccion& o) const {
    return num_ * o.den_ < o.num_ * den_;
}
std::ostream& operator<<(std::ostream& os, const Fraccion& f) {
    return os << f.num_ << '/' << f.den_;
}

int main() {
    Fraccion a(1, 2), b(1, 3);
    Fraccion c = a + b;
    std::cout << c << '\n';
}