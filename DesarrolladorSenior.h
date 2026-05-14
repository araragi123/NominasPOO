#ifndef DESARROLLADORSENIOR_H
#define DESARROLLADORSENIOR_H

#include "Empleado.h"

class DesarrolladorSenior : public Empleado {
public:
    DesarrolladorSenior(string nombre, float salarioBase);
    float calcularSalario() override;
    string getTipo() override;
};

#endif
