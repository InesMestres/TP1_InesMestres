#include "EntidadOrganizativa.hpp"
#include <memory>

//Empleado 

Empleado::Empleado(const std::string& nombre_empleado, const std::string& puesto_empleado){
    nombre = nombre_empleado;
    puesto = puesto_empleado;
}

int Empleado::getAmbiguedad(){
    return ambiguedad;
}

bool Empleado::updateSalario(float salarioNuevo){
    salario = salarioNuevo;
    return true;
}

float Empleado::getSalario(){
    return salario;
}

//Manager (tipo de empleado, hereda de Empleado):

Manager(float bono_empleado, std::string nivel_empleado): Empleado(nombre_empleado, puesto_empleado), bono(bono_empleado), nivel(nivel_empleado){
    bono = bono_empleado;
    nivel = nivel_empleado;
}

bool Manager::updateBono(float nuevo_bono){
    bono = nuevo_bono;
    return true;
}

int Manager::getBono(){
    return bono;
}

bool Manager::setLevel(std::string nuevo_nivel){
    level = nuevo_nivel;
    return true;
}

//Puestos que heredan de manager:
class GerenteAlto: public Manager{
    
};
class GerenteMedio: public Manager{

};
class GerenteBajo: public Manager{

};
class LiderEquipo: public Manager{

};