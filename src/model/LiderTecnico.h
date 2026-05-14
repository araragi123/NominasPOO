#ifndef LIDERTECNICO_H
#define LIDERTECNICO_H

#include "Empleado.h"

class LiderTecnico : public Empleado {
public:
    LiderTecnico(string nombre, float salarioBase);
    float calcularSalario() override;
    string getTipo() override;
};

#endif
