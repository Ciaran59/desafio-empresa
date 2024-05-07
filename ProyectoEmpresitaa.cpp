#include <iostream>
#include <cmath>
#include <string>
#include "empresa.h"


// En el archivo Empleado.cpp

Empleado::Empleado() : nombre(""), salario(0.0), fechaingreso(""), rut(""), afp("") {
    // Constructor por defecto de Empleado
}

// En el archivo Gerente.cpp

Gerente::Gerente() : Empleado(), area("") {
    // Constructor por defecto de Gerente
}


// Función que encuentra el empleado con el sueldo mas alto

std::string MayorSueldo(Empleado X[], int N) {
    float mayorSueldo = 0;
    std::string empleadomayorSueldo = "";

    for (int i = 0; i < N; i++) {
        if(X[i].getSalario() > mayorSueldo) {
            mayorSueldo = X[i].getSalario();
            empleadomayorSueldo = X[i].getNombre();
        }
    }
        return empleadomayorSueldo;
        std::cout << "Nombre del empleado: " << MayorSueldo(X, N) << std::endl;
}

void llenarGerentes(Gerente X[], int n) {
    std::string nombre, fechaingreso, rut, afp, area;
    float salario;

    for (int i = 0; i < n; i++) {
        std::cout << "Ingrese el nombre del gerente: ";
        std::cin >> nombre;
        X[i].setNombre(nombre);

        std::cout << "Ingrese la fecha de ingreso del gerente: ";
        std::cin >> fechaingreso;
        X[i].setFechaingreso(fechaingreso);

        std::cout << "Ingrese el rut del gerente: ";
        std::cin >> rut;
        X[i].setRut(rut);

        std::cout << "Ingrese la afp del gerente: ";
        std::cin >> afp;
        X[i].setAfp(afp);

        std::cout << "Ingrese el salario del gerente: ";
        std::cin >> salario;
        X[i].setSalario(salario);

        std::cout << "Ingrese el area del gerente: ";
        std::cin >> area;
        // Aquí asumimos que tienes un setter para 'area' en la clase Gerente
        X[i].setArea(area);
    }
}
void llenarEmpleados(Empleado X[], int N) {
    std::string nombre, fechaingreso, rut, afp;
    float salario;

    for (int i = 0; i < N; i++) {
        std::cout << "Ingrese el nombre del empleado: ";
        std::cin >> nombre;
        X[i].setNombre(nombre);

        std::cout << "Ingrese la fecha de ingreso del empleado: ";
        std::cin >> fechaingreso;
        X[i].setFechaingreso(fechaingreso);

        std::cout << "Ingrese el rut del empleado: ";
        std::cin >> rut;
        X[i].setRut(rut);

        std::cout << "Ingrese la afp del empleado: ";
        std::cin >> afp;
        X[i].setAfp(afp);

        std::cout << "Ingrese el salario del empleado: ";
        std::cin >> salario;
        X[i].setSalario(salario);
    }
}

void ver(Empleado X[],int N) {
    for (int i = 0; i<N; i++) {
    X[i].ver();
    }
}

int main () {
    Empleado X[10000];
    Gerente Y[100];
    int N;
    int n;
    std::cout << "Ingrese el numero de empleados de la empresa: ";
    std::cin >> N;
    llenarEmpleados(X, N);
    std::cout << "Ingrese el numero de gerentes de la empresa: ";
    std::cin >> n;
    llenarGerentes(Y, n);

        bool decision = false;
    char num;
    std::cout <<" Desea ver los arreglos?:\n 1. Si. \n 2. No. \n "; std::cin >> num;
    if(num=='1') {
        decision = true;
    }
    else if (num == '2') {
        decision = false;
    }
    else {
        std::cout << "Opción no válida. Por favor, elija 1 o 2.\n";
    }
    if (decision == true){
        ver(X,N);
        MayorSueldo(X,N);
        ver(Y,n);
        MayorSueldo(Y,n);
    }
    std::cout <<" Programa finalizado";
    return 0;

}


