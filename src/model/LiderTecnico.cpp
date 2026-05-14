#include "LiderTecnico.h"

LiderTecnico::LiderTecnico(string nombre, float salarioBase)
    : Empleado(nombre, salarioBase) {}

float LiderTecnico::calcularSalario() {
    return salarioBase * 1.25f; 
}

string LiderTecnico::getTipo() {
    return "Lider Tecnico";
}
