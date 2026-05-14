#include <iostream>
#include <vector>
#include <iomanip>
#include "Empleado.h"
#include "DesarrolladorJunior.h"
#include "DesarrolladorSenior.h"
#include "LiderTecnico.h"
#include "Tester.h"

using namespace std;

vector<Empleado*> inicializarDatos() {
    vector<Empleado*> empleados;

    empleados.push_back(new DesarrolladorJunior("Elton tito", 2000000));
    empleados.push_back(new DesarrolladorJunior("Alan Brito", 2200000));

    empleados.push_back(new DesarrolladorSenior("Elsa capunta", 4000000));
    empleados.push_back(new DesarrolladorSenior("juan damian", 4500000));

    empleados.push_back(new LiderTecnico("donato", 6000000));
    empleados.push_back(new LiderTecnico("santiago", 6500000));

    empleados.push_back(new Tester("Daniela Rios", 2500000));
    empleados.push_back(new Tester("Andres Mora", 2800000));

    return empleados;
}

void procesarNomina(vector<Empleado*>& empleados) {
    float total = 0;

    cout << "========================================" << endl;
    cout << "         NOMINA DE EMPLEADOS            " << endl;
    cout << "========================================" << endl;

    cout << fixed << setprecision(2);

    for (Empleado* e : empleados) {
        float salario = e->calcularSalario(); 
        total += salario;
        cout << "Nombre : " << e->getNombre() << endl;
        cout << "Tipo   : " << e->getTipo() << endl;
        cout << "Salario: $" << salario << endl;
        cout << "----------------------------------------" << endl;
    }

    cout << "TOTAL A PAGAR: $" << total << endl;
    cout << "========================================" << endl;
}

int main() {
    vector<Empleado*> empleados = inicializarDatos();
    procesarNomina(empleados);

 
    for (Empleado* e : empleados) {
        delete e;
    }

    return 0;
}
