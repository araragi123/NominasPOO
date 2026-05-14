#ifndef DESARROLLADORJUNIOR_H
#define DESARROLLADORJUNIOR_H

#include "Empleado.h"

class DesarrolladorJunior : public Empleado {
public:
    DesarrolladorJunior(string nombre, float salarioBase);
    float calcularSalario() override;
    string getTipo() override;
};

#endif
