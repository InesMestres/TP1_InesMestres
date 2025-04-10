#include "Ejercicio3-Personaje-Factory.hpp"
#include <memory>






std::shared_ptr<Personaje> PersonajeFactory::crear_personaje(const std::string& tipo) {
    if (tipo == "hechicero") {
        return crear_hechicero();
    } else if (tipo == "conjurador") {
        return crear_conjurador();
    } else if (tipo == "brujo") {
        return crear_brujo();
    } else if (tipo == "nigromante") {
        return crear_nigromante();
    } else if (tipo == "barbaro") {
        return crear_barbaro();
    } else if (tipo == "paladin") {
        return crear_paladin();
    } else if (tipo == "caballero") {
        return crear_caballero();
    } else if (tipo == "mercenario") {
        return crear_mercenario();
    } else if (tipo == "gladiador") {
        return crear_gladiador();
    } else {
        throw std::invalid_argument("Tipo de personaje desconocido: " + tipo);
    }
}

static std::shared_ptr<Personaje> crear_personaje_armado(const std::string& tipo);

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