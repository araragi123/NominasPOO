#include "DesarrolladorSenior.h"

DesarrolladorSenior::DesarrolladorSenior(string nombre, float salarioBase)
    : Empleado(nombre, salarioBase) {}

float DesarrolladorSenior::calcularSalario() {
    return salarioBase * 1.20f; 
}

string DesarrolladorSenior::getTipo() {
    return "Desarrollador Senior";
}
