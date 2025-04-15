#include "Personajes.hpp"
#include "Armas.hpp"
#include <string>

//Personajes:

//Personaje funciones: 

Personaje::Personaje(const std::string& tipo, int vida) : tipo_personaje(tipo), vida_personaje(vida) {}

std::string Personaje::get_tipo_personaje() const {
    return tipo_personaje;
}

void Personaje::agregar_arma(std::shared_ptr<Arma> arma){
    armas.push_back(arma);
}   

int Personaje::get_vida(){
    return vida_personaje;
}

int Personaje::perder_vida(int cantidad_vidas){
    vida_personaje -= cantidad_vidas;
    if(vida_personaje <= 0){vida_personaje = 0;}
    return vida_personaje; 
}

void Personaje::atacar_personaje(std::shared_ptr<Personaje> atacado) {
    atacado->perder_vida(10);
    if (armas.size() > 0) {
        std::shared_ptr<Arma> arma_elegida = armas[std::rand() % armas.size()];
        std::cout << "El " << tipo_personaje << " ataca con " << arma_elegida -> get_nombre() << " y hace 10 puntos de daño" << std::endl;
    } else {
        std::cout << "El " << tipo_personaje << " ataca y hace 10 puntos de daño" << std::endl;
    }
}


//Funciones mago:
mago::mago(std::string tipo_mago, int nivel_experiencia_mago, std::string especialidad_mago, int energia_mago, int vida_mago) : Personaje(tipo_mago, vida_mago), nivel_experiencia_mago(nivel_experiencia_mago), especialidad_mago(especialidad_mago), energia_mago(energia_mago) {}

int mago::get_nivel_experiencia_mago() const{
    return nivel_experiencia_mago;
}

std::string mago::get_especialidad_mago() const{
    return especialidad_mago;
}

int mago::get_energia_mago(){
    return energia_mago;
}

void mago::esta_presente(){
    std::cout << "El mago es un " << tipo_personaje << " , tiene nivel de experiencia: " << nivel_experiencia_mago << " , se especializa en: " << especialidad_mago << " ,en este momento tiene energía: " << energia_mago << " y vida: " << vida_personaje << std::endl;
    return;
}

//Funciones Guerreros:

guerrero::guerrero(std::string tipo_guerrero, int nivel_experiencia_guerrero, std::string cualidad_guerrero, int energia_guerrero, int vida_guerrero) : Personaje(tipo_guerrero, vida_guerrero), nivel_experiencia_guerrero(nivel_experiencia_guerrero), cualidad_guerrero(cualidad_guerrero), energia_guerrero(energia_guerrero){}

int guerrero::get_nivel_experiencia_guerrero() const{
    return nivel_experiencia_guerrero;
}

std::string guerrero::get_cualidad_guerrero() const{
    return cualidad_guerrero;
}

int guerrero::get_energia_guerrero(){
    return energia_guerrero;
}

void guerrero::esta_presente(){
    std::cout << "Este guerrero es de tipo: " << tipo_personaje << " , tienen nivel de experiencia: " << nivel_experiencia_guerrero << ", su principal cualidad es: " << cualidad_guerrero << ", en este momento tiene energía: " << energia_guerrero << ", y vida: " << vida_personaje << std::endl;
    return;
}
