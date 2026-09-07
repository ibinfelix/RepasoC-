#include <string>
class Persona {
protected:
	std::string nombre_;
public:
	Persona(const std::string& n) : nombre_(n) {}
};
	
class Empleado : public Persona {
	double sueldo_;
public:
	Empleado(const std::string& n, double s) : Persona(n), sueldo_(s) {};
};