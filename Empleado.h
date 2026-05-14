#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using namespace std;

class Empleado {
protected:
    string nombre;
    float salarioBase;

public:
    Empleado(string nombre, float salarioBase);
    virtual float calcularSalario();
    string getNombre();
    virtual string getTipo();
};

#endif
