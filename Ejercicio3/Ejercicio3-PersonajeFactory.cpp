#include "Ejercicio3-Personaje-Factory.hpp"
#include "Ejercicio2-Header-Personajes.hpp"
#include <memory>
#include <iomanip>
#include <string>
#include <vector>
#include <stdexcept>


//Creador de personajes: 

std::shared_ptr<Personaje> PersonajeFactory::crear_personaje(const std::string& tipo_personaje){
    if(tipo_personaje == "hechicero" || tipo_personaje == "Hechicero"){
        return crear_hechicero();
    }
    if(tipo_personaje == "conjurador" || tipo_personaje == "Conjurador"){
        return crear_conjurador();
    }
    if(tipo_personaje == "brujo" || tipo_personaje == "Brujo"){
        return crear_brujo();
    }
    if(tipo_personaje == "nigromante" || tipo_personaje == "Nigromante"){
        return crear_nigromante();
    }   
    if(tipo_personaje == "barbaro" || tipo_personaje == "Barbaro"){
        return crear_barbaro();
    }
    if(tipo_personaje == "paladin" || tipo_personaje == "Paladin"){
        return crear_paladin();
    }
    if(tipo_personaje == "caballero" || tipo_personaje == "Caballero"){
        return crear_caballero();
    }
    if(tipo_personaje == "mercenario" || tipo_personaje == "Mercenario"){
        return crear_mercenario();
    }
    if(tipo_personaje == "gladiador" || tipo_personaje == "Gladiador"){
        return crear_gladiador();
    }
    else{
        throw std::invalid_argument("El tipo de personaje" + tipo_personaje + " es desconocido");
    }
}

//Creador de armas:

std::shared_ptr<Arma> PersonajeFactory::crear_arma(const std::string& tipo_arma){
    if(tipo_arma == "baston" || tipo_arma == "Baston"){
        return crear_baston();
    }
    if(tipo_arma == "libro de hechizos" || tipo_arma == "Libro de Hechizos"){
        return crear_libroDeHechizos();
    }
    if(tipo_arma == "pocion" || tipo_arma == "Pocion"){
        return crear_pocion();
    }
    if(tipo_arma == "amuleto" || tipo_arma == "Amuleto"){
        return crear_amuleto();
    }
    if(tipo_arma == "hacha simple" || tipo_arma == "Hacha Simple"){
        return crear_hachaSimple();
    }   
    if(tipo_arma == "hacha doble" || tipo_arma == "Hacha Doble"){
        return crear_hachaDoble();
    }
    if(tipo_arma == "espada" || tipo_arma == "Espada"){
        return crear_espada();
    }
    if(tipo_arma == "lanza" || tipo_arma == "Lanza"){
        return crear_lanza();
    }
    if(tipo_arma == "garrote" || tipo_arma == "Garrote"){
        return crear_garrote();
    }
    else{
        throw std::invalid_argument("El tipo de arma " + tipo_arma + " es desconocida");
    }
}

//Creador de personajes con armas: 

std::shared_ptr<Personaje> PersonajeFactory::crear_personaje_armado(const std::string& tipo_personaje, int cantidad_armas){
    
    std::shared_ptr<Personaje> personaje = crear_personaje(tipo_personaje);
    
    std::vector<std::string> variedad_armas = {"baston", "libro de hechizos", "pocion", "amuleto", "hacha simple", "hacha doble", "espada", "lanza", "garrote"};
    
    for(int i = 0; i < cantidad_armas; i++){
        std::string tipo_de_arma = variedad_armas[std::rand() % variedad_armas.size()];
        std::shared_ptr<Arma> arma = crear_arma(tipo_de_arma);
        personaje -> agregar_arma(std::move(arma));
    }
    return personaje;
}

//métodos para crear los personajes y armas:

//Personajes:
std::shared_ptr<Personaje> PersonajeFactory::crear_hechicero(){return std::make_shared<hechicero>();}
std::shared_ptr<Personaje> PersonajeFactory::crear_conjurador(){return std::make_shared<conjurador>();}
std::shared_ptr<Personaje> PersonajeFactory::crear_brujo(){return std::make_shared<brujo>();}
std::shared_ptr<Personaje> PersonajeFactory::crear_nigromante(){return std::make_shared<nigromante>();}
std::shared_ptr<Personaje> PersonajeFactory::crear_barbaro(){return std::make_shared<barbaro>();}
std::shared_ptr<Personaje> PersonajeFactory::crear_paladin(){return std::make_shared<paladin>();}
std::shared_ptr<Personaje> PersonajeFactory::crear_caballero(){return std::make_shared<caballero>();}
std::shared_ptr<Personaje> PersonajeFactory::crear_mercenario(){return std::make_shared<mercenario>();}
std::shared_ptr<Personaje> PersonajeFactory::crear_gladiador(){return std::make_shared<gladiador>();}

//Armas:
std::shared_ptr<Arma> PersonajeFactory::crear_baston(){return std::make_shared<baston>();}
std::shared_ptr<Arma> PersonajeFactory::crear_libroDeHechizos(){return std::make_shared<libroDeHechizos>();}
std::shared_ptr<Arma> PersonajeFactory::crear_pocion(){return std::make_shared<pocion>();}
std::shared_ptr<Arma> PersonajeFactory::crear_amuleto(){return std::make_shared<amuleto>();}
std::shared_ptr<Arma> PersonajeFactory::crear_hachaSimple(){return std::make_shared<hachaSimple>();}
std::shared_ptr<Arma> PersonajeFactory::crear_hachaDoble(){return std::make_shared<hachaDoble>();}
std::shared_ptr<Arma> PersonajeFactory::crear_espada(){return std::make_shared<espada>();}
std::shared_ptr<Arma> PersonajeFactory::crear_lanza(){return std::make_shared<lanza>();}
std::shared_ptr<Arma> PersonajeFactory::crear_garrote(){return std::make_shared<garrote>();}

