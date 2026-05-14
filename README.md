

Ejercicio que usa conceptos de polimorfismo en POO.



## Estructura del proyecto


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


## Evidencia de ejecución

### Salida de consola

<img width="560" height="543" alt="image" src="https://github.com/user-attachments/assets/f43dcf4f-9b72-4aac-8063-99aead8fb8b6" />

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



## Explicación del diseño

### 1. ¿Cuál es la clase base y por qué?

La clase base es Empleado, la elegí como base porque todos los tipos de empleados comparten dos atributos fundamentales, el nombre y el salario base. En lugar de volver a poner esos atributos en cada clase, los defino una sola vez en `Empleado` y las clases derivadas los heredan.

### 2. ¿Qué método se sobrescribe en las clases derivadas?

El métodocalcularSalario()0 en la clase base está declarado con la palabra virtual, lo que le indica que este método puede ser reemplazado. Cada clase derivada lo implementa con su propia lógica.

### 3. ¿Dónde se evidencia el polimorfismo en el programa?

En la función procesarNomina hay una lista con todos los empleados. Para calcular el salario de cada uno simplemente se llama calcularSalario(), sin preguntar qué tipo de empleado es. C++ solo sabe que es un Empleado, pero en tiempo de ejecución se da cuenta si es un Junior, un Senior, un Tester o un Líder, y ejecuta el cálculo correcto. Eso es el polimorfismo: el mismo llamado al método da resultados distintos según el objeto que lo esté ejecutando.



### 4. ¿Por qué sería menos adecuado resolver esto con if o switch?

Si usáramos if o switch para identificar el tipo de cada empleado y calcular su salario, el código se volvería difícil de mantener. Cada vez que se agregue un nuevo tipo de empleado habría que modificar esa estructura de condiciones, aumentando el riesgo de errores. Con polimorfismo, simplemente se crea una nueva clase derivada y se sobrescribe calcularSalario(), sin tocar el resto del código.


## Dificultad encontrada

**Problema:** Al principio no entendía para qué servía la palabra virtual en la clase base.

Parte del código relacionada:

virtual float calcularSalario();

Qué entendí: Sin virtual, aunque se llame calcularSalario() a través de un puntero Empleado, C++ siempre ejecutaría la versión de la clase base, ignorando la versión de la clase derivada. Con virtual, C++ sabe que debe buscar la versión correcta según el tipo real del objeto en tiempo de ejecución. Esa es la clave del polimorfismo.


## Uso de IA

### Opción B: usé IA como apoyo

 Usé IA generativa como apoyo en esta actividad. La utilicé para: guiarme en la estructura del proyecto, aclarar el concepto de polimorfismo y revisar el código.

 Fragmento o idea sugerida por la IA:
 La IA me sugirió usar un vector de punteros Empleado* para almacenar todos los empleados y así poder llamar calcularSalario() de forma polimórfica.

 Qué revisé antes de usarlo:
 Verifiqué que el programa compilara correctamente y que los salarios calculados coincidieran con los porcentajes de bono indicados en el enunciado.

 Qué cambié o adapté:
 Ajusté los nombres y salarios base de los empleados de prueba para que fueran más representativos del contexto colombiano.
