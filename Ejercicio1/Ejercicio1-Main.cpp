#include "EntidadOrganizativa.hpp"
#include <iostream>
#include <string>

struct personaje{
    std::string tipo_personaje;
}

struct arma{
    std::string tipo_arma;
}

struct personajeArmado{
    std::string tipo_personaje;
    int cantidad_armas;
    tiposDeArmas tipo_arma;
}

enum class tiposDeArmas {

};



int main(){
    
    
    

    return 0;
}

/*Genere varios empleados de distinto tipo.
ii. Tenga en cuenta los límites de los GerenteAlto y los GerenteMedio, y que
cantEmpleadosDeps cuenta los empleados de todos los departamentos.
iii. Genere los departamentos, empresas y las centrales regionales que crea
necesario.
iv. Relacione los objetos creados en los puntos anteriores de acuerdo a la
Figura 1.
*/