#include "LiderTecnico.h"

LiderTecnico::LiderTecnico(string nombre, float salarioBase)
    : Empleado(nombre, salarioBase) {}

float LiderTecnico::calcularSalario() {
    return salarioBase * 1.25f; // bono 25%
}

string LiderTecnico::getTipo() {
    return "Lider Tecnico";
}
