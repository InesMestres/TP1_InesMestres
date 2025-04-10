#include "Ejercicio2-Header-Personajes.hpp"
#include "Ejercicio2-Header-Armas.hpp"

#include <string>

//Funciones Armas


//Funciones de items magicos:

itemMagico::itemMagico(std::string nombre_itemMagico, std::string elemento_itemMagico, int destruccion_itemMagico, std::string rareza_itemMagico, int durabilidad_itemMagico);

std::string itemMagico::get_nombre_itemMagico() const{
    return nombre_itemMagico;
}

std::string itemMagico::get_elemento_ItemMagico() const{
    return elemento_itemMagico;
}

int itemMagico::get_destruccion_itemMagico() const{
    return destruccion_itemMagico;
}

std::string itemMagico::get_rareza_itemMagico() const{
    return rareza_itemMagico;
}

int itemMagico::get_durabilidad_itemMagico() const{
    return durabilidad_itemMagico;
}

void itemMagico::descripcion_itemMagico(){
    std::cout << "El item mágico: " << nombre_itemMagico << " tiene de principal elemento al: " << elemento_itemMagico << ", una rareza de: " << rareza_itemMagico << ", la cantidad de vidas que quita es: " << destruccion_itemMagico << ", y puese ser utilizado una cantidad total de: " << durabilidad_itemMagico << std::endl;
    return;
}









//Personajes:

//Funciones mago:
mago::mago(std::string tipo_mago, int nivel_experiencia_mago, std::string especialidad_mago, int energia_mago, int vida_mago): Personaje(){
}

std::string mago::get_tipo_mago() const{
    return tipo_mago;
}

int mago::get_nivel_experiencia_mago() const{
    return nivel_experiencia_mago;
}

std::string mago::get_especialidad_mago() const{
    return especialidad_mago;
}

int mago::get_energia_mago(){
    return energia_mago;
}

int mago::get_vida_mago(){
    return vida_mago;
}

void mago::descripcion_mago(){
    std::cout << "El mago es un " << tipo_mago << " , tiene nivel de experiencia: " << nivel_experiencia_mago << " , se especializa en: " << especialidad_mago << " ,en este momento tiene energía: " << energia_mago << " y vida: " << vida_mago << std::endl;
    return;
}

//Funciones Guerreros:

guerrero::guerrero(std::string tipo_guerrero, int nivel_experiencia_guerrero, std::string especialidad_guerrero, int energia_guerrero, int vida_guerrero){
}

std::string guerrero::get_tipo_guerrero() const{
    return tipo_guerrero;
}

int guerrero::get_nivel_experiencia_guerrero() const{
    return nivel_experiencia_guerrero;
}

std::string guerrero::get_cualidad_guerrero() const{
    return cualidad_guerrero;
}

int guerrero::get_energia_guerrero(){
    return energia_guerrero;
}

int guerrero::get_vida_guerrero(){
    return vida_guerrero;
}

void guerrero::descripcion_guerrero(){
    std::cout << "Este guerrero es de tipo: " << tipo_guerrero << " , tienen nivel de experiencia: " << nivel_experiencia_guerrero << ", su principal cualidad es: " << cualidad_guerrero << ", en este momento tiene energía: " << energia_guerrero << ", y vida: " << vida_guerrero << std::endl;
    return;
}
