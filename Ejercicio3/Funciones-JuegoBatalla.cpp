#include "Personajes.hpp"
#include "Armas.hpp"
#include "Personaje-Factory.hpp"
#include "Funciones-JuegoBatalla.hpp"

#include <iostream>
#include <ctime>
#include <memory>
#include <tuple>

std::vector<std::string> posibles_opciones_ataques = {"Golpe Fuerte", "Golpe Rapido", "Defensa y Golpe"};
std::vector<std::string> tipos_personajes = {"hechicero", "conjurador", "brujo", "nigromante", "barbaro", "paladin", "caballero", "mercenario", "gladiador"};

std::tuple<std::shared_ptr<Personaje>, std::string, int, std::shared_ptr<Personaje>, std::string, int> crear_personajes(){
    std::vector<std::string> tipos_personajes = {"hechicero", "conjurador", "brujo", "nigromante", "barbaro", "paladin", "caballero", "mercenario", "gladiador"};
    std::string tipo_personaje1 = tipos_personajes[rand() % tipos_personajes.size()];
    std::string tipo_personaje2 = tipos_personajes[rand() % tipos_personajes.size()];
    int cantidad_armas1 = std::rand() % 3;
    int cantidad_armas2 = std::rand() % 3;
    std::shared_ptr<Personaje> jugador1 = PersonajeFactory::crear_personaje_armado(tipo_personaje1, cantidad_armas1);
    std::shared_ptr<Personaje> jugador2 = PersonajeFactory::crear_personaje_armado(tipo_personaje2, cantidad_armas2);
    return {jugador1, tipo_personaje1, cantidad_armas1, jugador2, tipo_personaje2, cantidad_armas2};
}

void describir_estado_personajes(const std::shared_ptr<Personaje>& jugador1, const std::string& tipo_personaje1, int cantidad_armas1, const std::shared_ptr<Personaje>& jugador2, const std::string& tipo_personaje2, int cantidad_armas2){ 
    std::cout << "El jugador 1 es un " << tipo_personaje1 << " con " << jugador1->get_vida() << "HP y con " << cantidad_armas1 << " armas " << std::endl;
    std::cout << "El jugador 2 es un " << tipo_personaje2 << " con " << jugador2->get_vida() << "HP y con " << cantidad_armas2 << " armas " << std::endl;  
    return;
}

std::string jugador1_eleccionAtaque(){
    std::cout << "Jugador 1, elija su ataque entre: Golpe Fuerte, Golpe Rapido, Defensa y Golpe: " << std::endl;
    std::string ataque1;
    std::getline(std::cin, ataque1);
    while(ataque1 != "Golpe Fuerte" &&  ataque1 != "Golpe Rapido" && ataque1 != "Defensa y Golpe"){
        std::cout << "Ataque inválido, elija entre: Golpe Fuerte, Golpe Rapido, Defensa y Golpe" << std::endl;
        std::cin.ignore();
        std::getline(std::cin, ataque1);
    }
    return ataque1;
}

    //El jugador 2 tiene un ataque random:
std::string jugador2_ataqueRandom(){
    std::vector<std::string> posibles_opciones_ataques = {"Golpe Fuerte", "Golpe Rapido", "Defensa y Golpe"};
    std::string ataque2 = posibles_opciones_ataques[std::rand()%3];
    return ataque2;
}

void combate_comparacionAtaques(const std::shared_ptr<Personaje>& jugador1, const std::string& ataque1, const std::shared_ptr<Personaje>& jugador2, const std::string& ataque2){

    if(ataque1 == "Golpe Fuerte" && ataque2 == "Golpe Rapido"){
        jugador1->atacar_personaje(jugador2);
    }
    else if(ataque2 == "Golpe Fuerte" && ataque1 == "Golpe Rapido"){
        jugador2->atacar_personaje(jugador1);
    }
    else if(ataque1 == "Golpe Rapido" && ataque2 == "Defensa y Golpe"){
        jugador1->atacar_personaje(jugador2);
    }
    else if(ataque2 == "Golpe Rapido" && ataque1 == "Defensa y Golpe"){
        jugador2->atacar_personaje(jugador1);
    }
    else if(ataque1 == "Golpe Fuerte" && ataque2 == "Defensa y Golpe"){
        jugador2->atacar_personaje(jugador1);
    }
    else if(ataque2 == "Golpe Fuerte" && ataque1 == "Defensa y Golpe"){
        jugador1->atacar_personaje(jugador2);
    } else {
        std::cout << "¡Los ataques fueron iguales! Nadie recibe daño." << std::endl;
    }

}

void resultados(const std::shared_ptr<Personaje>& jugador1){
    if (jugador1->get_vida() == 0) {
        std::cout << "Ganó el jugador 2" << std::endl;
    } else {
        std::cout << "Ganó el jugador 1" << std::endl;
    }
    return;
}

