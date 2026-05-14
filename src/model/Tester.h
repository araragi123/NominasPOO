#ifndef TESTER_H
#define TESTER_H

#include 

class Tester : public Empleado {
public:
    Tester(string nombre, float salarioBase);
    float calcularSalario() override;
    string getTipo() override;
};

#endif
