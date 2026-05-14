#include "DesarrolladorJunior.h"

DesarrolladorJunior::DesarrolladorJunior(string nombre, float salarioBase)
    : Empleado(nombre, salarioBase) {}

float DesarrolladorJunior::calcularSalario() {
    return salarioBase; 
}

string DesarrolladorJunior::getTipo() {
    return "Desarrollador Junior";
}
