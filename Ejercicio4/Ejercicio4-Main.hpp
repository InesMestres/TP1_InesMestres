/*3. En este ejercicio se programarán la batalla entre sólo dos personajes del ejercicio 2.
Las reglas de las peleas siguen un modelo de piedra-papel-tijera, en este caso “Golpe
Fuerte”, “Golpe Rápido” y “Defensa y Golpe”.

3.1. Elección de ataque: El jugador 1 debe elegir por teclado una de las tres posibles
opciones. La opción del jugador 2 viene dada por una variable aleatoria
utilizando std::rand().

Daño y defensa: El “Golpe Fuerte” le gana al “Golpe Rápido” y hace 10 puntos
de daño a quien lanzó el “Golpe Rápido”. El “Golpe Rápido” le gana a la “Defensa
y Golpe” y hace 10 puntos de daño a quien lanzó “Defensa y Golpe”. Si el
personaje usa “Defensa y Golpe” bloquea el “Golpe Fuerte” haciendo 10 puntos
de daño a quien lanzó el “Golpe Fuerte”. En caso de que los dos personajes
realicen la misma acción, ningún personaje recibirá daño y se pasa a la siguiente
ronda de elección.
*/


#include "Ejercicio3-Personaje-Factory.hpp"
#include <iostream>
#include <ctime>
#include <memory>
#include <string>
#include <vector>


int main(){

    std::srand(std::time(nullptr));

    std::vector<std::string> posibles_opciones_ataques = {"Golpe Fuerte", "Golpe Rapido", "Defensa y Golpe"};
    std::vector<std::string> tipos_personajes = {"hechicero", "conjurador", "brujo", "nigromante", "barbaro", "paladin", "caballero", "mercenario", "gladiador"};

    std::string tipo_personaje1 = tipos_personajes[rand() % tipos_personajes.size()];
    std::string tipo_personaje2 = tipos_personajes[rand() % tipos_personajes.size()];
    int cantidad_armas1 = std::rand() % 3;
    int cantidad_armas2 = std::rand() % 3;

    std::shared_ptr<Personaje> jugador1 = PersonajeFactory::crear_personaje_armado(tipo_personaje1, cantidad_armas1);
    std::shared_ptr<Personaje> jugador2 = PersonajeFactory::crear_personaje_armado(tipo_personaje2, cantidad_armas2);

    while (jugador1->get_vida() > 0 && jugador2->get_vida() > 0) {
        std::cout << "El jugador 1 es un " << tipo_personaje1 << " con " << jugador1->get_vida() << "HP y con " << cantidad_armas1 << " armas " << std::endl;
        std::cout << "El jugador 2 es un " << tipo_personaje2 << " con " << jugador2->get_vida() << "HP y con " << cantidad_armas2 << " armas " << std::endl;

        //Elige el jugador 1:
        std::cout << "Jugador 1, elija su ataque entre: Golpe Fuerte, Golpe Rapido, Defensa y Golpe: " << std::endl;
        std::string ataque1;
        std::cin.ignore();
        std::getline(std::cin, ataque1);

        while(ataque1 != "Golpe Fuerte" &&  ataque1 != "Golpe Rapido" && ataque1 != "Defensa y Golpe"){
            std::cout << "Ataque inválido, elija entre: Golpe Fuerte, Golpe Rapido, Defensa y Golpe" << std::endl;
            std::cin.ignore();
            std::getline(std::cin, ataque1);
        }

        //El jugador 2 tiene un ataque random:

        std::string ataque2 = posibles_opciones_ataques[std::rand()%3];

        // Comparación de ataques: 

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

    if (jugador1->get_vida() == 0) {
        std::cout << "Ganó el jugador 2" << std::endl;
    } else {
        std::cout << "Ganó el jugador 1" << std::endl;
    }
    

    return 0;

}