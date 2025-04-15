#include "Personajes.hpp"
#include "Armas.hpp"
#include <string>

//Funciones Armas

Arma::Arma(const std::string& nombre) : nombre(nombre) {}

//Funciones de items magicos:

itemMagico::itemMagico(const std::string& nombre_itemMagico, const std::string& elemento_itemMagico, const std::string& rareza_itemMagico, const std::string& color_itemMagico, int destruccion_itemMagico): Arma(nombre_itemMagico), elemento_itemMagico(elemento_itemMagico), rareza_itemMagico(rareza_itemMagico), color_itemMagico(color_itemMagico), destruccion_itemMagico(destruccion_itemMagico){}
;

std::string itemMagico::get_elemento_ItemMagico() const{
    return elemento_itemMagico;
}

std::string itemMagico::get_rareza_itemMagico() const{
    return rareza_itemMagico;
}

std::string itemMagico::get_color_itemMagico() const{
    return color_itemMagico;
}

int itemMagico::get_destruccion_itemMagico() const{
    return destruccion_itemMagico;
}

void itemMagico::usar_arma(){
    std::cout << "El item mágico: " << nombre << " tiene de principal elemento al: " << elemento_itemMagico << ", una rareza de: " << rareza_itemMagico << ", su color es: " << color_itemMagico << " y la cantidad de vidas que quita es: " << destruccion_itemMagico  << std::endl;
    return;
}


//Funciones armas de combate:

armaDeCombate::armaDeCombate(const std::string& nombre_armaCombate, const std::string& material_armaCombate, const std::string& rareza_armaCombate, int destruccion_armaCombate, int precision_armaCombate): Arma(nombre_armaCombate), material_armaCombate(material_armaCombate), rareza_armaCombate(rareza_armaCombate), destruccion_armaCombate(destruccion_armaCombate), precision_armaCombate(precision_armaCombate) {}

std::string armaDeCombate::get_material_armaCombate() const{
    return material_armaCombate;
}

std::string armaDeCombate::get_rareza_armaCombate() const{
    return rareza_armaCombate;
}

int armaDeCombate::get_destruccion_armaCombate() const{
    return destruccion_armaCombate;
}

int armaDeCombate::get_precision_armaCombate() const{
    return precision_armaCombate;
}

void armaDeCombate::usar_arma(){
    std::cout << "El arma de combate es: " << nombre << "es de rareza:" << rareza_armaCombate << " , esta hecha de material: " << material_armaCombate << " , genera pérdida de vida de: " << destruccion_armaCombate << ", y tiene una presición de: " <<precision_armaCombate << std::endl;
    return;
}

