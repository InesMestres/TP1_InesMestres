#include "Personajes.hpp"
#include "Armas.hpp"
#include <string>



//FUNCIONES DE CASO BASE ARMA:

Arma::Arma(const std::string& nombre): nombre(nombre){}

std:: string Arma::get_nombre() const{
    return nombre;
}






//----------------------------------------------------------------------------------------------//

//FUNCIONES DE CLASE ABSTRACTA ITEM MAGICO:

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

itemMagico::~itemMagico(){}

//-------------------------------//

//FUNCIONES ESPECIFICAS DE CADA ITEM MAGICO:


//Bastón:
int baston::get_largo() const{
    return largo;
}
int baston::get_peso() const{
    return peso;
}
void baston::usar_arma(){
    std::cout << "Tipo Item Mágico: " << nombre << " - Elemento: " << elemento_itemMagico << " - Rareza: " << rareza_itemMagico << " - Color: " << color_itemMagico << "Peso: " << peso << " kg  - Largo: " << largo << " - Destrucción: " << destruccion_itemMagico << std::endl;
}

//Libro de hechizos:
int libroDeHechizos::get_cantidad_hojas() const{
    return cantidad_hojas;
}
std::string libroDeHechizos::get_idioma() const{
    return idioma;
}
void libroDeHechizos::usar_arma(){
    std::cout << "Tipo Item Mágico: " << nombre << " - Elemento: " << elemento_itemMagico << " - Rareza: " << rareza_itemMagico << " - Color: " << color_itemMagico << "Cantidad de Hojas: " << cantidad_hojas << "Idioma: " << idioma << " - Destrucción: " << destruccion_itemMagico << std::endl;
    return;
}

//Poción:
std::string pocion::get_efecto() const{
    return efecto;
}
std::string pocion::get_ingrediente_secreto() const{
    return ingrediente_secreto;
}
void pocion::usar_arma(){
    std::cout << "Tipo Item Mágico: " << nombre << " - Elemento: " << elemento_itemMagico << " - Rareza: " << rareza_itemMagico << " - Color: " << color_itemMagico << " - Efecto: " << efecto << " - Ingrediente Secreto: " << ingrediente_secreto << " - Destrucción: " << destruccion_itemMagico << std::endl;
    return;
}

//Amuleto
std::string amuleto::get_tipo_piedra() const{
    return tipo_piedra;
}
std::string amuleto::get_poder() const{
    return poder;
}
void amuleto::usar_arma(){
    std::cout << "Tipo Item Mágico: " << nombre << " - Elemento: " << elemento_itemMagico << " - Rareza: " << rareza_itemMagico << " - Color: " << color_itemMagico << " - Tipo Piedra: " << tipo_piedra << " - Poder: " << poder << " - Destrucción: " << destruccion_itemMagico << std::endl;
    return;
}




//-------------------------------------------------------------------------------------------------//

//FUNCIONES CLASE ABSTRACTA DE ARMA DE COMBATE


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

armaDeCombate::~armaDeCombate() {}


//-------------------------------//

//FUNCIONES ESPECIFICAS DE CADA ARMA DE COMBATE:

//Hacha Simple:

int hachaSimple::get_nivel_filo() const{
    return nivel_filo;
}
int hachaSimple::get_peso() const{
    return peso;
}
void hachaSimple:: usar_arma(){
    std::cout << "Tipo Arma de combate: " << nombre << " - Rareza: " << rareza_armaCombate << " - Material: " << material_armaCombate << " - Peso: " << peso << " kg - Nivel Filo: " << nivel_filo << " - Destrucción: " << destruccion_armaCombate << " - Precisión: " <<precision_armaCombate << std::endl;
    return;
}

//Hacha Doble: 

int hachaDoble::get_nivel_filo() const{
    return nivel_filo;
}
int hachaDoble::get_peso() const{
    return peso;
}
void hachaDoble:: usar_arma(){
    std::cout << "Tipo Arma de combate: " << nombre << " - Rareza: " << rareza_armaCombate << " - Material: " << material_armaCombate << " - Peso: " << peso << " kg  - Nivel Filo: " << nivel_filo << " - Destrucción: " << destruccion_armaCombate << " - Precisión: " <<precision_armaCombate << std::endl;
    return;
}

//Espada:

std::string espada::get_forma() const{
    return forma;
}
int espada::get_longitud() const{
    return longitud;
}
void espada::usar_arma(){
    std::cout << "Tipo Arma de combate: " << nombre << " - Rareza: " << rareza_armaCombate << " - Material: " << material_armaCombate << " - Forma: " << forma << " -  Longitud: " << longitud << " mts  - Destrucción: " << destruccion_armaCombate << " - Precisión: " <<precision_armaCombate << std::endl;
    return;
}

//lanza:
std::string lanza::get_forma_punta() const{
    return forma_punta;
}
std::string lanza::get_lugar_origen() const{
    return lugar_origen;
}
void lanza::usar_arma(){
    std::cout << "Tipo Arma de combate: " << nombre << " - Rareza: " << rareza_armaCombate << " -  Lugar de Orígen: " << lugar_origen << " - Material: " << material_armaCombate << " - Forma de Punta: " << forma_punta  << " mts  - Destrucción: " << destruccion_armaCombate << " - Precisión: " <<precision_armaCombate << std::endl;
    return;
}

//Garrote:
std::string garrote::get_uso() const{
    return uso;
}
std::string garrote::get_epoca_utilizacion() const{
    return epoca_utilizacion;
}
void garrote::usar_arma(){
    std::cout << "Tipo Arma de combate: " << nombre << " - Rareza: " << rareza_armaCombate << " -  Uso Principal: " << uso << " - Epoca de uso: " << epoca_utilizacion  << " - Material: " << material_armaCombate << " - Destrucción: " << destruccion_armaCombate << " - Precisión: " <<precision_armaCombate << std::endl;
    return;
}