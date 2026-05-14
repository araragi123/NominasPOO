# Polimorfismo - Ejercicio Salario de Empleados

Ejercicio que usa conceptos de polimorfismo en POO.

---

## Estructura del proyecto

```
nomina/
├── CMakeLists.txt
├── .gitignore
├── src/
│   ├── Empleado.h / Empleado.cpp
│   ├── DesarrolladorJunior.h / DesarrolladorJunior.cpp
│   ├── DesarrolladorSenior.h / DesarrolladorSenior.cpp
│   ├── LiderTecnico.h / LiderTecnico.cpp
│   ├── Tester.h / Tester.cpp
│   └── main.cpp
```

---

## Evidencia de ejecución

### Salida de consola

```
========================================
         NOMINA DE EMPLEADOS            
========================================
Nombre : Ana Torres
Tipo   : Desarrollador Junior
Salario: $2000000.00
----------------------------------------
Nombre : Luis Gomez
Tipo   : Desarrollador Junior
Salario: $2200000.00
----------------------------------------
Nombre : Maria Perez
Tipo   : Desarrollador Senior
Salario: $4800000.00
----------------------------------------
Nombre : Carlos Ruiz
Tipo   : Desarrollador Senior
Salario: $5400000.00
----------------------------------------
Nombre : Sofia Mendez
Tipo   : Lider Tecnico
Salario: $7500000.00
----------------------------------------
Nombre : Jorge Castro
Tipo   : Lider Tecnico
Salario: $8125000.00
----------------------------------------
Nombre : Daniela Rios
Tipo   : Tester
Salario: $2625000.00
----------------------------------------
Nombre : Andres Mora
Tipo   : Tester
Salario: $2940000.00
----------------------------------------
TOTAL A PAGAR: $35590000.00
========================================
```

### Tabla de datos de prueba

| Nombre         | Tipo                  | Salario Base    | Bono | Salario Final   |
|----------------|-----------------------|-----------------|------|-----------------|
| Ana Torres     | Desarrollador Junior  | $2.000.000      | 0%   | $2.000.000      |
| Luis Gomez     | Desarrollador Junior  | $2.200.000      | 0%   | $2.200.000      |
| Maria Perez    | Desarrollador Senior  | $4.000.000      | 20%  | $4.800.000      |
| Carlos Ruiz    | Desarrollador Senior  | $4.500.000      | 20%  | $5.400.000      |
| Sofia Mendez   | Lider Tecnico         | $6.000.000      | 25%  | $7.500.000      |
| Jorge Castro   | Lider Tecnico         | $6.500.000      | 25%  | $8.125.000      |
| Daniela Rios   | Tester                | $2.500.000      | 5%   | $2.625.000      |
| Andres Mora    | Tester                | $2.800.000      | 5%   | $2.940.000      |
| **TOTAL**      |                       |                 |      | **$35.590.000** |

---

## Explicación del diseño

### 1. ¿Cuál es la clase base y por qué?

La clase base es `Empleado`. La elegí como base porque todos los tipos de empleados comparten dos atributos fundamentales: el nombre y el salario base. En lugar de repetir esos atributos en cada clase, los defino una sola vez en `Empleado` y las clases derivadas los heredan automáticamente.

### 2. ¿Qué método se sobrescribe en las clases derivadas?

El método `calcularSalario()`. En la clase base está declarado con la palabra `virtual`, lo que le indica a C++ que este método puede ser reemplazado. Cada clase derivada lo implementa con su propia lógica de bono:

- `DesarrolladorJunior`: retorna el salario base sin modificación.
- `DesarrolladorSenior`: retorna `salarioBase * 1.20`.
- `LiderTecnico`: retorna `salarioBase * 1.25`.
- `Tester`: retorna `salarioBase * 1.05`.

### 3. ¿Dónde se evidencia el polimorfismo en el programa?

En la función `procesarNomina`, donde se recorre un vector de punteros `Empleado*` y se llama `e->calcularSalario()` sin saber de qué tipo concreto es cada empleado. C++ decide en tiempo de ejecución qué versión del método ejecutar según el tipo real del objeto. Eso es polimorfismo: el mismo llamado produce resultados distintos dependiendo del objeto.

```cpp
for (Empleado* e : empleados) {
    float salario = e->calcularSalario(); // polimorfismo en acción
}
```

### 4. ¿Por qué sería menos adecuado resolver esto con `if` o `switch`?

Si usáramos `if` o `switch` para identificar el tipo de cada empleado y calcular su salario, el código se volvería difícil de mantener. Cada vez que se agregue un nuevo tipo de empleado habría que modificar esa estructura de condiciones, aumentando el riesgo de errores. Con polimorfismo, simplemente se crea una nueva clase derivada y se sobrescribe `calcularSalario()`, sin tocar el resto del código.

---

## Dificultad encontrada

**Problema:** Al principio no entendía para qué servía la palabra `virtual` en la clase base.

**Parte del código relacionada:**
```cpp
virtual float calcularSalario();
```

**Qué entendí:** Sin `virtual`, aunque se llame `calcularSalario()` a través de un puntero `Empleado*`, C++ siempre ejecutaría la versión de la clase base, ignorando la versión de la clase derivada. Con `virtual`, C++ sabe que debe buscar la versión correcta según el tipo real del objeto en tiempo de ejecución. Esa es la clave del polimorfismo.

---

## Uso de IA

#### Opción B: usé IA como apoyo

> Usé IA generativa como apoyo en esta actividad. La utilicé para: guiarme en la estructura del proyecto, aclarar el concepto de polimorfismo y revisar el código.
>
> Fragmento o idea sugerida por la IA:
> La IA me sugirió usar un vector de punteros `Empleado*` para almacenar todos los empleados y así poder llamar `calcularSalario()` de forma polimórfica.
>
> Qué revisé antes de usarlo:
> Verifiqué que el programa compilara correctamente y que los salarios calculados coincidieran con los porcentajes de bono indicados en el enunciado.
>
> Qué cambié o adapté:
> Ajusté los nombres y salarios base de los empleados de prueba para que fueran más representativos del contexto colombiano.
