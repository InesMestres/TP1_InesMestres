#include "Ejercicio2-Header-Personajes.hpp"
#include "Ejercicio2-Header-Armas.hpp"
#include "Ejercicio3-PersonajeFactory.hpp"
#include <cstdlib>
#include <ctime>



struct DatosPersonaje{
    std::string tipo_personaje;
    std::vector<std::string> tipos_armas;
}



int main(){

    std::rand(std::time(nullptr));

    int cantidadMagos = std::rand() % (7-3+1)
    std::cout << "La cantidad de magos será: " << cantidadMagos << std::endl;
    int cantidadGuerreros = std::rand() % (7-3+1)
    std::cout << "La cantidad de guerreros será: " << cantidadGuerreros << std::endl;

    std::vector<std::string> tipos_magos = {"hechicero", "conjurador", "brujo", "nigromante"};
    std::vector<std::string> tipos_guerreros = {"barbaro", "paladin", "caballero", "mercenario", "gladiador"};

    for(int i = 0; i < cantidadMagos; i++){
        std::string tipo_personaje = tipos_magos[rand()%tipos_magos.size()];
        int cantidad_armas = rand() % 3;
        std::shared_ptr<Personaje> personajeArmado = PersonajeFactory::crear_personaje_armado(tipo_personaje, cantidad_armas);
    }

    for(int i = 0; i < cantidadGuerreros; i++){
        std::string tipo_personaje = tipos_guerreros[rand()%tipos_guerreros.size()];
        int cantidad_armas = rand() % 3;
        std::shared_ptr<Personaje> personajeArmado = PersonajeFactory::crear_personaje_armado(tipo_personaje, cantidad_armas);
    }

    return 0;
}





