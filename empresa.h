//
// Created by pedro on 06-05-2024.
//

#ifndef EMPRESA_H
#define EMPRESA_H

#endif //EMPRESA_H

#include <iostream>
#include <cmath>
#include <string>


class Empleado{
private:
    std::string nombre, fechaingreso,  rut,  afp;
    float salario;
public:
    Empleado();
    Empleado(std::string _nombre, float _salario, std::string _fechaingreso, std::string _rut, std::string _afp) {
        nombre = _nombre;
        salario = _salario;
        fechaingreso = _fechaingreso;
        rut = _rut;
        afp = _afp;
    }

    // Setters
    void setSalario(float _salario)
    {
        salario = _salario;
    }
    void setNombre(std::string _nombre) {
        nombre = _nombre;
    }
    void setFechaingreso(std::string _fechaingreso) {
        fechaingreso = _fechaingreso;
    }
    void setRut(std::string _rut) {
        rut = _rut;
    }
    void setAfp(std::string _afp) {
        afp = _afp;
    }

    // Getters
    float getSalario() {
        return salario;
    }
    std::string getNombre() {
        return nombre;
    }
    std::string getFechaingreso() {
        return fechaingreso;
    }
    std::string getRut() {
        return rut;
    }
    std::string getAfp() {
        return afp;
    }

    // Metodo para visualizar la clase
    void ver() {

        std::cout << " Nombre: " << nombre << std::endl;
        std::cout << " Fecha de ingreso: " << fechaingreso << std::endl;
        std::cout << " Rut: " << rut << std::endl;
        std::cout << " AFP: " << afp << std::endl;
        std::cout << " Salario: " << salario << std::endl;
    }

};

class Gerente : public Empleado {
private:
    std::string area;

public:
    Gerente();
    Gerente(std::string _nombre, float _salario, std::string _fechaingreso, std::string _rut, std::string _afp, std::string _area)
        : Empleado(_nombre, _salario, _fechaingreso, _rut, _afp){
    };
     void setArea(std::string _area) {
     area = _area;
    }
    void verr()  {
        Empleado::ver();
        std::cout << " Area: " << area << std::endl;
    }
};