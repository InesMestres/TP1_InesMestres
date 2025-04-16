#include "Personajes.hpp"
#include "Armas.hpp"
#include <string>

//CLASE BASE: PERSONAJES:


//PERSONAJE FUNCIONES

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





//FUNCIONES CLASE ABSTRACTA MAGO:

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



//FUNCIONES PERSONALIZADAS DE CADA TIPO DE MAGO:

//Hechicero: 
std::string hechicero::get_vestimenta() const{
    return vestimenta;
}
std::string hechicero::get_gorro() const{
    return gorro;
}
void hechicero::esta_presente(){
    std::cout << "Tipo de mago: " << tipo_personaje << " - Nivel de experiencia: " << nivel_experiencia_mago << " - Especialización: " << especialidad_mago << "Vestimenta: " << vestimenta << " - Accesorio: " << gorro << " Energía: " << energia_mago << " - Vida: " << vida_personaje << std::endl;
    return;
}

//Conjurador:
std::string conjurador::get_sinonimo() const{
    return sinonimo;
}
std::string conjurador::get_riesgo() const{
    return riesgo;
}
void conjurador::esta_presente(){
    std::cout << "Tipo de mago: " << tipo_personaje << " - Sinónimo: " << sinonimo << " - Nivel de experiencia: " << nivel_experiencia_mago << " - Especialización: " << especialidad_mago << " Energía: " << energia_mago << " - Vida: " << vida_personaje << " - Riesgo/Debilidad: " << riesgo << std::endl;
    return;
}

//Brujo:
std::string brujo::get_cualidad() const{
    return cualidad;
}
std::string brujo::get_epoca() const{
    return epoca;
}
void brujo::esta_presente(){
    std::cout << "Tipo de mago: " << tipo_personaje << " - Nivel de experiencia: " << nivel_experiencia_mago << " - Especialización: " << especialidad_mago << " - Cualidad Brujo: " << cualidad << " - Época de orígen: " << epoca << " - Energía: " << energia_mago << " - Vida: " << vida_personaje << std::endl;
    return;
}

//Nigromante:
std::string nigromante::get_cualidad() const{
    return cualidad;
}
std::string nigromante::get_pais() const{
    return pais;
}
void nigromante::esta_presente(){
    std::cout << "Tipo de mago: " << tipo_personaje << " - Nivel de experiencia: " << nivel_experiencia_mago << " - Especialización: " << especialidad_mago << " - País de origen: " << pais << " - Cualidad: " << cualidad << " - Energía: " << energia_mago << " - Vida: " << vida_personaje << std::endl;
    return;
}






//GUERREROS: 


//FUNCIONES CLASE ABSTRACTA GUERRERO:

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


//FUNCIONES PERSONALIZADAS DE CADA TIPO DE GUERRERO: 

//Barbaro:
std::string barbaro::get_nombre_rey() const{
    return nombre_rey;
}
int barbaro::get_ira() const{
    return ira;
}

void barbaro::esta_presente(){
    std::cout << "Tipo Guerrero: " << tipo_personaje  << " - Nombre: " << nombre_rey << " - Nivel de Experiencia: " << nivel_experiencia_guerrero << " - Principal Cualidad: " << cualidad_guerrero << " - Nivel Energía: " << energia_guerrero << " Vida: " << vida_personaje << " - Nivel ira: " << ira << std::endl;
    return;
}

//Paladin:
std::string paladin::get_prioridad() const{
    return prioridad;
}
std::string paladin::get_acceso() const{
    return acceso;
}
void paladin::esta_presente(){
    std::cout << "Tipo Guerrero: " << tipo_personaje << " - Nivel de Experiencia: " << nivel_experiencia_guerrero << " - Principal Cualidad: " << cualidad_guerrero << " - Prioridad: " << prioridad << " - Arma Secreta: " << acceso << " - Nivel Energía: " << energia_guerrero << " Vida: " << vida_personaje << std::endl;
    return;
}

//Caballero:
std::string caballero::get_nombre_caballo() const{
    return nombre_caballo;
}
std::string caballero::get_material_armadura() const{
    return material_armadura;
}
void caballero::esta_presente(){
    std::cout << "Tipo Guerrero: " << tipo_personaje << " - Nivel de Experiencia: " << nivel_experiencia_guerrero << " - Principal Cualidad: " << cualidad_guerrero << " - Nombre Caballo: " << nombre_caballo << " - Material Armadura: " << material_armadura << " - Nivel Energía: " << energia_guerrero << " Vida: " << vida_personaje << std::endl;
    return;
}

//Mercenario:
std::string mercenario::get_motivacion() const{
    return motivacion;
}
std::string mercenario::get_contratante() const{
    return contratante;
}
void mercenario::esta_presente(){
    std::cout << "Tipo Guerrero: " << tipo_personaje << " - Nivel de Experiencia: " << nivel_experiencia_guerrero << " - Principal Cualidad: " << cualidad_guerrero << " - Motivación: " << motivacion << " - Contratante: " << contratante << " - Nivel Energía: " << energia_guerrero << " Vida: " << vida_personaje << std::endl;
    return;
}

//Gladiador:
int gladiador::get_monstruos_vencidos() const{
    return monstruos_vencidos;
}
std::string gladiador::get_ciudad() const{
    return ciudad;
}
void gladiador::esta_presente(){
    std::cout << "Tipo Guerrero: " << tipo_personaje << " - Nivel de Experiencia: " << nivel_experiencia_guerrero << " - Monstruos Vencidos: " << monstruos_vencidos << " - Principal Cualidad: " << cualidad_guerrero  << " - Ciudad: " << ciudad << " - Nivel Energía: " << energia_guerrero << " Vida: " << vida_personaje << std::endl;
    return;
}
