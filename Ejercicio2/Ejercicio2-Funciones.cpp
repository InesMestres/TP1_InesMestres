#include "Ejercicio2-Header-Personajes.hpp"
#include "Ejercicio2-Header-Armas.hpp"
#include <string>

//Funciones Armas

Arma::Arma(const std::string& nombre) : nombre(nombre) {}

//Funciones de items magicos:

itemMagico::itemMagico(const std::string& nombre_itemMagico, const std::string& elemento_itemMagico, int destruccion_itemMagico, const std::string& rareza_itemMagico, int durabilidad_itemMagico) : Arma(nombre_itemMagico) {}

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
    std::cout << "El item mágico: " << nombre << " tiene de principal elemento al: " << elemento_itemMagico << ", una rareza de: " << rareza_itemMagico << ", la cantidad de vidas que quita es: " << destruccion_itemMagico << ", y puese ser utilizado una cantidad total de: " << durabilidad_itemMagico << std::endl;
    return;
}


//Funciones armas de combate:

armaDeCombate::armaDeCombate(const std::string& nombre_armaCombate, const std::string& material_armaCombate, int destruccion_armaCombate, const std::string& rareza_armaCombate, int precision_armaCombate) : Arma(nombre_armaCombate) {
}

std::string armaDeCombate::get_material_armaCombate() const{
    return material_armaCombate;
}

int armaDeCombate::get_destruccion_armaCombate() const{
    return destruccion_armaCombate;
}

std::string armaDeCombate::get_rareza_armaCombate() const{
    return rareza_armaCombate;
}

int armaDeCombate::get_precision_armaCombate() const{
    return precision_armaCombate;
}

void armaDeCombate::descripcion_armaCombate(){
    std::cout << "El arma de combate es: " << nombre << "es de rareza:" << rareza_armaCombate << " , esta hecha de material: " << material_armaCombate << " , genera pérdida de vida de: " << destruccion_armaCombate << ", y tiene una presición de: " <<precision_armaCombate << std::endl;
    return;
}



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
}


void Personaje::atacar_personaje(std::shared_ptr<Personaje> atacado) {
    atacado->perder_vida(10);
    if (armas.size() > 0) {
        std::shared_ptr<Arma> arma_elegida = armas[std::rand() % armas.size()];
        std::cout << "El " << tipo_personaje << " ataca con " << arma_elegida.get_tipo_arma() << " y hace 10 puntos de daño" << std::endl;
    } else {
        std::cout << "El " << tipo_personaje << " ataca y hace 10 puntos de daño" << std::endl;
    }
}


//Funciones mago:
mago::mago(const std::string& tipo_mago, int nivel_experiencia_mago, const std::string& especialidad_mago, int energia_mago, int vida_mago): Personaje(){
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

void mago::descripcion_mago(){
    std::cout << "El mago es un " << tipo_personaje << " , tiene nivel de experiencia: " << nivel_experiencia_mago << " , se especializa en: " << especialidad_mago << " ,en este momento tiene energía: " << energia_mago << " y vida: " << vida_personaje << std::endl;
    return;
}

//Funciones Guerreros:

guerrero::guerrero(const std::string& tipo_guerrero, int nivel_experiencia_guerrero, const std::string& especialidad_guerrero, int energia_guerrero, int vida_guerrero){
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

void guerrero::descripcion_guerrero(){
    std::cout << "Este guerrero es de tipo: " << tipo_personaje << " , tienen nivel de experiencia: " << nivel_experiencia_guerrero << ", su principal cualidad es: " << cualidad_guerrero << ", en este momento tiene energía: " << energia_guerrero << ", y vida: " << vida_personaje << std::endl;
    return;
}
