#include "Tester.h"

Tester::Tester(string nombre, float salarioBase)
    : Empleado(nombre, salarioBase) {}

float Tester::calcularSalario() {
    return salarioBase * 1.05f;  
}

string Tester::getTipo() {
    return "Tester";
}
