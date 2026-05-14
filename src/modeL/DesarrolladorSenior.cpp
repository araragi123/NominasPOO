#include "DesarrolladorSenior.h"

DesarrolladorSenior::DesarrolladorSenior(string nombre, float salarioBase)
    : Empleado(nombre, salarioBase) {}

float DesarrolladorSenior::calcularSalario() {
    return salarioBase * 1.20f; // bono 20%
}

string DesarrolladorSenior::getTipo() {
    return "Desarrollador Senior";
}
