#include "Empleado.h"

Empleado::Empleado(string nombre, float salarioBase) {
    this->nombre = nombre;
    this->salarioBase = salarioBase;
}

float Empleado::calcularSalario() {
    return salarioBase;
}

string Empleado::getNombre() {
    return nombre;
}

string Empleado::getTipo() {
    return "Empleado";
}
