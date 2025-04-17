#ifndef JUEGO_BATALLA_HPP
#define JUEGO_BATALLA_HPP
#include "Personajes.hpp"
#include "Armas.hpp"
#include "Personaje-Factory.hpp"

//SE DEFINEN FUNCIONES QUE VAN A SER UTILIZADAS EN EL JUEGO PARA QUE EL PROGRAMA SEPA QUE EXISTEN:

//Crea personajes con un tipo específico y una cantidad de armas random (entre 0 y 2).
std::tuple<std::shared_ptr<Personaje>, std::string, int, std::shared_ptr<Personaje>, std::string, int> crear_personajes();

//Describe a los personajes: su tipo, su cantidad de vida actual y su cantidad de armas:
void describir_estado_personajes(const std::unique_ptr<Personaje>& jugador1, const std::string& tipo_personaje1, int cantidad_armas1, const std::unique_ptr<Personaje>& jugador2, const std::string& tipo_personaje2, int cantidad_armas2);

//El jugador 1 elige un ataque de los tres posibles:
std::string jugador1_eleccionAtaque();

//El jugador 2 tiene un ataque random:
std::string jugador2_ataqueRandom();

//Se comparan los ataques de los dos jugadores que se enfrentan
void combate_comparacionAtaques(const std::unique_ptr<Personaje>& jugador1, const std::string& ataque1, const std::unique_ptr<Personaje>& jugador2, const std::string& ataque2);

//Se imprimen los resultados (el ganador). 
void resultados(const std::unique_ptr<Personaje>& jugador1);


#endif