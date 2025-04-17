#include "Personajes.hpp"
#include "Armas.hpp"
#include <string>


//FUNCIONES DE INTERFAZ ARMA:

//Constructor:
Arma::Arma(const std::string& nombre): nombre(nombre){}

//Devuelve el nombre del tipo de arma: 
std:: string Arma::get_nombre() const{
    return nombre;
}




//----------------------------------------------------------------------------------------------//

//FUNCIONES DE CLASE ABSTRACTA ITEM MAGICO:

//Constructor: 
itemMagico::itemMagico(const std::string& nombre_itemMagico, const std::string& elemento_itemMagico, const std::string& rareza_itemMagico, const std::string& color_itemMagico, int destruccion_itemMagico): Arma(nombre_itemMagico), elemento_itemMagico(elemento_itemMagico), rareza_itemMagico(rareza_itemMagico), color_itemMagico(color_itemMagico), destruccion_itemMagico(destruccion_itemMagico){}
;

//Devuelve elemento del item mágico:
std::string itemMagico::get_elemento_ItemMagico() const{
    return elemento_itemMagico;
}

//Devuelve rareza del item mágico:
std::string itemMagico::get_rareza_itemMagico() const{
    return rareza_itemMagico;
}

//Devuelve color del item mágico:
std::string itemMagico::get_color_itemMagico() const{
    return color_itemMagico;
}

//Devuelve nivel de destrucción del item mágico:
int itemMagico::get_destruccion_itemMagico() const{
    return destruccion_itemMagico;
}

//Permite imprimir datos del arma por consola para demostrar que está presente en el juego
void itemMagico::usar_arma() {
    std::cout << "Usando el Item Mágico: " << nombre << std::endl;
    return;
}

//Destructor:
itemMagico::~itemMagico(){}



//-------------------------------//
//SUBCLASES CONCRETAS DE CADA ITEM MAGICO:


//BASTON:

//Devuelve largo del bastón:
int baston::get_largo() const{
    return largo;
}
//Devuelve el peso del bastón:
int baston::get_peso() const{
    return peso;
}
//Imprime datos del bastón por la consola para demostrar que está presente:
void baston::usar_arma(){
    std::cout << "Tipo Item Mágico: " << nombre << " - Elemento: " << elemento_itemMagico << " - Rareza: " << rareza_itemMagico << " - Color: " << color_itemMagico << "Peso: " << peso << " kg  - Largo: " << largo << " - Destrucción: " << destruccion_itemMagico << std::endl;
}


//LIBRO DE HECHIZOS:

//Devuelve la cantidad de hojas que tiene el libro:
int libroDeHechizos::get_cantidad_hojas() const{
    return cantidad_hojas;
}
//Devuelve el idioma del libro:
std::string libroDeHechizos::get_idioma() const{
    return idioma;
}
//Imprime datos del libro por la consola para demostrar que está presente:
void libroDeHechizos::usar_arma(){
    std::cout << "Tipo Item Mágico: " << nombre << " - Elemento: " << elemento_itemMagico << " - Rareza: " << rareza_itemMagico << " - Color: " << color_itemMagico << "Cantidad de Hojas: " << cantidad_hojas << "Idioma: " << idioma << " - Destrucción: " << destruccion_itemMagico << std::endl;
    return;
}


//POCIÓN:

//Devuelve el efecto que genera la poción:
std::string pocion::get_efecto() const{
    return efecto;
}
//Retorna el ingrediente secreto de la poción: 
std::string pocion::get_ingrediente_secreto() const{
    return ingrediente_secreto;
}
////Imprime datos de la poción por la consola para demostrar que está presente:
void pocion::usar_arma(){
    std::cout << "Tipo Item Mágico: " << nombre << " - Elemento: " << elemento_itemMagico << " - Rareza: " << rareza_itemMagico << " - Color: " << color_itemMagico << " - Efecto: " << efecto << " - Ingrediente Secreto: " << ingrediente_secreto << " - Destrucción: " << destruccion_itemMagico << std::endl;
    return;
}


//AMULETO:

//Devuelve el tipo de pierda del que está hecho el amuleto:
std::string amuleto::get_tipo_piedra() const{
    return tipo_piedra;
}
//Retorna el poder específico del amuleto:
std::string amuleto::get_poder() const{
    return poder;
}
////Imprime datos del amuleto por la consola para demostrar que está presente:
void amuleto::usar_arma(){
    std::cout << "Tipo Item Mágico: " << nombre << " - Elemento: " << elemento_itemMagico << " - Rareza: " << rareza_itemMagico << " - Color: " << color_itemMagico << " - Tipo Piedra: " << tipo_piedra << " - Poder: " << poder << " - Destrucción: " << destruccion_itemMagico << std::endl;
    return;
}




//-------------------------------------------------------------------------------------------------//

//FUNCIONES CLASE ABSTRACTA DE ARMA DE COMBATE

//Constructor:
armaDeCombate::armaDeCombate(const std::string& nombre_armaCombate, const std::string& material_armaCombate, const std::string& rareza_armaCombate, int destruccion_armaCombate, int precision_armaCombate): Arma(nombre_armaCombate), material_armaCombate(material_armaCombate), rareza_armaCombate(rareza_armaCombate), destruccion_armaCombate(destruccion_armaCombate), precision_armaCombate(precision_armaCombate) {}

//Retorna el material del arma:
std::string armaDeCombate::get_material_armaCombate() const{
    return material_armaCombate;
}

//Retorna la rareza del arma:
std::string armaDeCombate::get_rareza_armaCombate() const{
    return rareza_armaCombate;
}

//Retorna la destrucción del arma:
int armaDeCombate::get_destruccion_armaCombate() const{
    return destruccion_armaCombate;
}

//Retorna la precisión del arma:
int armaDeCombate::get_precision_armaCombate() const{
    return precision_armaCombate;
}

//Imprime información de este tipo de arma por la consola para demostrar que está presente en el juego. 
void armaDeCombate::usar_arma() {
    std::cout << "Usando el Arma de Combate: " << nombre << std::endl;
    return;
}

//Destructor:
armaDeCombate::~armaDeCombate() {}


//-------------------------------//

//FUNCIONES ESPECIFICAS DE CADA ARMA DE COMBATE:

//HACHA SIMPLE:

//Retorna el nivel de filo del hacha:
int hachaSimple::get_nivel_filo() const{
    return nivel_filo;
}
//Retorna el peso del hacha:
int hachaSimple::get_peso() const{
    return peso;
}
//Imprime datos generales y específicos de hacha para poder demostrar que está presente en el juego. 
void hachaSimple:: usar_arma(){
    std::cout << "Tipo Arma de combate: " << nombre << " - Rareza: " << rareza_armaCombate << " - Material: " << material_armaCombate << " - Peso: " << peso << " kg - Nivel Filo: " << nivel_filo << " - Destrucción: " << destruccion_armaCombate << " - Precisión: " <<precision_armaCombate << std::endl;
    return;
}


//HACHA DOBLE: 

//Retorna el nivel de filo del hacha:
int hachaDoble::get_nivel_filo() const{
    return nivel_filo;
}
//Devuelve el peso del hacha:
int hachaDoble::get_peso() const{
    return peso;
}
//Imprime datos generales y específicos de hacha para poder demostrar que está presente en el juego:
void hachaDoble:: usar_arma(){
    std::cout << "Tipo Arma de combate: " << nombre << " - Rareza: " << rareza_armaCombate << " - Material: " << material_armaCombate << " - Peso: " << peso << " kg  - Nivel Filo: " << nivel_filo << " - Destrucción: " << destruccion_armaCombate << " - Precisión: " <<precision_armaCombate << std::endl;
    return;
}


//ESPADA:

//Devuelve la forma de la espada:
std::string espada::get_forma() const{
    return forma;
}
//Retorna longitud de la espada:
int espada::get_longitud() const{
    return longitud;
}
//Imprime datos generales y específicos de espada para poder demostrar que está presente en el juego. 
void espada::usar_arma(){
    std::cout << "Tipo Arma de combate: " << nombre << " - Rareza: " << rareza_armaCombate << " - Material: " << material_armaCombate << " - Forma: " << forma << " -  Longitud: " << longitud << " mts  - Destrucción: " << destruccion_armaCombate << " - Precisión: " <<precision_armaCombate << std::endl;
    return;
}

//LANZA:

//Retorna la forma de la punta de la lanza: 
std::string lanza::get_forma_punta() const{
    return forma_punta;
}
//Retorna el lugar de orígen de la lanza. 
std::string lanza::get_lugar_origen() const{
    return lugar_origen;
}
////Imprime datos generales y específicos de lanza para poder demostrar que está presente en el juego. 
void lanza::usar_arma(){
    std::cout << "Tipo Arma de combate: " << nombre << " - Rareza: " << rareza_armaCombate << " -  Lugar de Orígen: " << lugar_origen << " - Material: " << material_armaCombate << " - Forma de Punta: " << forma_punta  << " mts  - Destrucción: " << destruccion_armaCombate << " - Precisión: " <<precision_armaCombate << std::endl;
    return;
}

//GARROTE:

//Retorna el uso principal del garrote:
std::string garrote::get_uso() const{
    return uso;
}
//Retorna la época en la cual mas se utilizó el garrote:
std::string garrote::get_epoca_utilizacion() const{
    return epoca_utilizacion;
}
//Imprime datos generales y específicos de garrote para poder demostrar que está presente en el juego. 
void garrote::usar_arma(){
    std::cout << "Tipo Arma de combate: " << nombre << " - Rareza: " << rareza_armaCombate << " -  Uso Principal: " << uso << " - Epoca de uso: " << epoca_utilizacion  << " - Material: " << material_armaCombate << " - Destrucción: " << destruccion_armaCombate << " - Precisión: " <<precision_armaCombate << std::endl;
    return;
}