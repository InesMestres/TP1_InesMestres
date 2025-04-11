#include "Ejercicio3-Personaje-Factory.hpp"

#include <memory>

/*2.3. Teniendo en cuenta que un personaje “has-a” arma, es decir existe una
composición entre ellos. Escriba una clase denominada “PersonajeFactory” que:
i. Permita crear en forma dinámica (en run-time) los objetos tipo
personajes.
ii. Permita crear en forma dinámica (en run-time) los objetos tipo armas.
iii. Permita crear en forma dinámica (en run-time) los objetos tipo
personajes armados (es decir, personajes que portan armas).
Se prefiere que estas clases no tengan que ser instanciadas para retornar los
objetos solicitados y que en lo posible utilicen smart pointers.
La idea es que esta clase deberá de crear un objeto, digamos un caballero, al
recibir un parámetro que indique que se quiere este tipo de objeto. Luego,
basándose en conceptos de polimorfismo, esta función devolverá un puntero
al objeto requerido.*/

//Creador de personajes: 

std::shared_ptr<Personaje> PersonajeFactory::crear_personaje(const std::string& tipo){
    if(tipo == "hechicero" || tipo == "Hechicero"){
        return crear_hechicero();
    }
    if(tipo == "conjurador" || tipo == "Conjurador"){
        return crear_conjurador();
    }
    if(tipo == "brujo" || tipo == "Brujo"){
        return crear_brujo();
    }
    if(tipo == "nigromante" || tipo == "Nigromante"){
        return crear_nigromante();
    }   
    if(tipo == "barbaro" || tipo == "Barbaro"){
        return crear_barbaro();
    }
    if(tipo == "paladin" || tipo == "Paladin"){
        return crear_paladin();
    }
    if(tipo == "caballero" || tipo == "Caballero"){
        return crear_caballero();
    }
    if(tipo == "mercenario" || tipo == "Mercenario"){
        return crear_mercenario();
    }
    if(tipo == "gladiador" || tipo == "Gladiador"){
        return crear_gladiador();
    }
    else{
        throw std::invalid_argument("El tipo de personaje" + tipo + " es desconocido");
    }
}


//Creador de armas:

std::shared_ptr<Arma> PersonajeFactory::crear_arma(const std::string& tipo){
    if(tipo == "baston" || tipo == "Baston"){
        return crear_baston();
    }
    if(tipo == "libro de hechizos" || tipo == "Libro de Hechizos"){
        return crear_libroDeHechizos();
    }
    if(tipo == "pocion" || tipo == "Pocion"){
        return crear_pocion();
    }
    if(tipo == "amuleto" || tipo == "Amuleto"){
        return crear_amuleto();
    }
    if(tipo == "hacha simple" || tipo == "Hacha Simple"){
        return crear_hachaSimple();
    }   
    if(tipo == "hacha doble" || tipo == "Hacha Doble"){
        return crear_hachaDoble();
    }
    if(tipo == "espada" || tipo == "Espada"){
        return crear_espada();
    }
    if(tipo == "lanza" || tipo == "Lanza"){
        return crear_lanza();
    }
    if(tipo == "garrote" || tipo == "Garrote"){
        return crear_garrote();
    }
    else{
        throw std::invalid_argument("El tipo de arma " + tipo + " es desconocida");
    }
}

//Creador de personajes con armas: 

static std::shared_ptr<Personaje> crear_personaje_armado(const std::string& tipo){
    
}

std::shared_ptr<Personaje> PersonajeFactory::crear_hechicero() {
    return std::make_shared<hechicero>();
}

std::shared_ptr<Personaje> PersonajeFactory::crear_conjurador() {
    return std::make_shared<conjurador>();
}

std::shared_ptr<Personaje> PersonajeFactory::crear_brujo() {
    return std::make_shared<brujo>();
}

std::shared_ptr<Personaje> PersonajeFactory::crear_nigromante() {
    return std::make_shared<nigromante>();
}

std::shared_ptr<Personaje> PersonajeFactory::crear_barbaro() {
    return std::make_shared<barbaro>();
}

std::shared_ptr<Personaje> PersonajeFactory::crear_paladin() {
    return std::make_shared<paladin>();
}

std::shared_ptr<Personaje> PersonajeFactory::crear_caballero() {
    return std::make_shared<caballero>();
}

std::shared_ptr<Personaje> PersonajeFactory::crear_mercenario() {
    return std::make_shared<mercenario>();
}

std::shared_ptr<Personaje> PersonajeFactory::crear_gladiador() {
    return std::make_shared<gladiador>();
}
