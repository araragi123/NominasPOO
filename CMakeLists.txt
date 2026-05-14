cmake_minimum_required(VERSION 3.27)
project(nominas2)

set(CMAKE_CXX_STANDARD 17)

add_executable(nominas2
        main.cpp
        Empleado.cpp
        DesarrolladorJunior.cpp
        DesarrolladorSenior.cpp
        LiderTecnico.cpp
        Tester.cpp
)

