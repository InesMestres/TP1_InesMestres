#include "Personaje-Factory.hpp"
#include "Funciones-JuegoBatalla.hpp"

#include <iostream>
#include <ctime>
#include <memory>
#include <string>
#include <vector>
    
int main(){

    std::srand(std::time(nullptr));

    //Creo 2 jugadores con su tipo de personaje y sus determinadas cantidades de armas:
    auto [jugador1, tipo_personaje1, cantidad_armas1, jugador2, tipo_personaje2, cantidad_armas2] = crear_personajes();

    //Juego se ejecuta hasta que un personaje se quede sin vida:
    while (jugador1->get_vida() > 0 && jugador2->get_vida() > 0) {

        //Describo los personajes creados y sus atributos:
        describir_estado_personajes(jugador1, tipo_personaje1, cantidad_armas1, jugador2, tipo_personaje2, cantidad_armas2);

        //Jugador1 elige su ataque:
        std::string ataque1 = jugador1_eleccionAtaque();

        //Jugador2 tiene un ataque random:
        std::string ataque2 = jugador2_ataqueRandom();

        //Se comparan los ataques:
        combate_comparacionAtaques(jugador1, ataque1, jugador2, ataque2);

    }

    //Se comunica el ganador:
    resultados(jugador1);

    return 0;
}