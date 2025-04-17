#include "Personajes.hpp"
#include "Armas.hpp"
#include <string>

//FUNCIONES DE INTERFAZ PERSONAJE

//Constructor personaje:
Personaje::Personaje(const std::string& tipo, int vida) : tipo_personaje(tipo), vida_personaje(vida) {}

//Retorna el tipo de personaje:
std::string Personaje::get_tipo_personaje() const {
    return tipo_personaje;
}

//Añade un arma al vector de armas de personaje:
void Personaje::agregar_arma(std::shared_ptr<Arma> arma){
    armas.push_back(arma);
}   

//Retorna cantidad de vida del personaje:
int Personaje::get_vida(){
    return vida_personaje;
}

//Le resta vida a un personaje si pierde un combate:
int Personaje::perder_vida(int cantidad_vidas){
    vida_personaje -= cantidad_vidas;
    if(vida_personaje <= 0){vida_personaje = 0;}
    return vida_personaje; 
}

//Permite a un personaje atacar a otro:
void Personaje::atacar_personaje(std::shared_ptr<Personaje> atacado) {
    atacado->perder_vida(10);
    if (armas.size() > 0) {
        std::shared_ptr<Arma> arma_elegida = armas[std::rand() % armas.size()];
        std::cout << "El " << tipo_personaje << " ataca con " << arma_elegida -> get_nombre() << " y hace 10 puntos de daño" << std::endl;
    } else {
        std::cout << "El " << tipo_personaje << " ataca y hace 10 puntos de daño" << std::endl;
    }
}



//----------------------------------------------------------------------//

//FUNCIONES CLASE ABSTRACTA MAGO:

//Constructor mago:
mago::mago(std::string tipo_mago, int nivel_experiencia_mago, std::string especialidad_mago, int energia_mago, int vida_mago) : Personaje(tipo_mago, vida_mago), nivel_experiencia_mago(nivel_experiencia_mago), especialidad_mago(especialidad_mago), energia_mago(energia_mago) {}

//Retorna el nivel de experiencia del mago:
int mago::get_nivel_experiencia_mago() const{
    return nivel_experiencia_mago;
}

//Retorna la especialidad del mago:
std::string mago::get_especialidad_mago() const{
    return especialidad_mago;
}

//Retorna la energia del mago:
int mago::get_energia_mago(){
    return energia_mago;
}

//Avisa por consola que el mago es parte del juego. 
void mago::esta_presente() {
    std::cout << "Esta presente un Mago: " << tipo_personaje << std::endl;
    return;
}

//Destructor de mago:
mago::~mago() {}


//---------------//

//FUNCIONES PERSONALIZADAS DE CADA SUBCLASE CONCRETA DE MAGO:

//SUBCLASEHECHICERO:

//Retorna su vestimenta;
std::string hechicero::get_vestimenta() const{
    return vestimenta;
}
//Retorna su gorro;
std::string hechicero::get_gorro() const{
    return gorro;
}
//Avisa por consola que el hechicero es parte del juego
void hechicero::esta_presente(){
    std::cout << "Tipo de mago: " << tipo_personaje << " - Nivel de experiencia: " << nivel_experiencia_mago << " - Especialización: " << especialidad_mago << "Vestimenta: " << vestimenta << " - Accesorio: " << gorro << " Energía: " << energia_mago << " - Vida: " << vida_personaje << std::endl;
    return;
}

//SUBCLASE CONJURADOR:

//Retorna un sinónimo de la palabra "conjurador":
std::string conjurador::get_sinonimo() const{
    return sinonimo;
}

//Retorna el riesgo que corren los conjuradores:
std::string conjurador::get_riesgo() const{
    return riesgo;
}

//Avisa por consola que el conjurador está presente en el juego:
void conjurador::esta_presente(){
    std::cout << "Tipo de mago: " << tipo_personaje << " - Sinónimo: " << sinonimo << " - Nivel de experiencia: " << nivel_experiencia_mago << " - Especialización: " << especialidad_mago << " Energía: " << energia_mago << " - Vida: " << vida_personaje << " - Riesgo/Debilidad: " << riesgo << std::endl;
    return;
}

//SUBCLASE BRUJO:

//Devuelve cualidad del brujo: 
std::string brujo::get_cualidad() const{
    return cualidad;
}
//Devuelve la época de crecimiento de la Brujería": 
std::string brujo::get_epoca() const{
    return epoca;
}

//Avisa que el brujo está presente en el juego. 
void brujo::esta_presente(){
    std::cout << "Tipo de mago: " << tipo_personaje << " - Nivel de experiencia: " << nivel_experiencia_mago << " - Especialización: " << especialidad_mago << " - Cualidad Brujo: " << cualidad << " - Época de orígen: " << epoca << " - Energía: " << energia_mago << " - Vida: " << vida_personaje << std::endl;
    return;
}


//SUBCLASE NIGROMANTE:

//Devuelve una cualidad del nigromante:
std::string nigromante::get_cualidad() const{
    return cualidad;
}
//Devuelve el país del que provee este tipo de brujería:
std::string nigromante::get_pais() const{
    return pais;
}
//Avisa por consola que está presente un nigromante en el juego:
void nigromante::esta_presente(){
    std::cout << "Tipo de mago: " << tipo_personaje << " - Nivel de experiencia: " << nivel_experiencia_mago << " - Especialización: " << especialidad_mago << " - País de origen: " << pais << " - Cualidad: " << cualidad << " - Energía: " << energia_mago << " - Vida: " << vida_personaje << std::endl;
    return;
}



//----------------------------------------------------------------------//


//FUNCIONES CLASE ABSTRACTA GUERRERO:

//Constructor: 
guerrero::guerrero(std::string tipo_guerrero, int nivel_experiencia_guerrero, std::string cualidad_guerrero, int energia_guerrero, int vida_guerrero) : Personaje(tipo_guerrero, vida_guerrero), nivel_experiencia_guerrero(nivel_experiencia_guerrero), cualidad_guerrero(cualidad_guerrero), energia_guerrero(energia_guerrero){}

//Retorna el nivel de experiencia del guerrero:
int guerrero::get_nivel_experiencia_guerrero() const{
    return nivel_experiencia_guerrero;
}
//Devuelve cualidad del guerrero: 
std::string guerrero::get_cualidad_guerrero() const{
    return cualidad_guerrero;
}
//Retorna el nivel de energía actual del guerrero: 
int guerrero::get_energia_guerrero(){
    return energia_guerrero;
}
//Imprime datos por consola para avisar que está presente un guerrero:
void guerrero::esta_presente(){
    std::cout << "Esta presente un Guerrero: " << tipo_personaje << std::endl;
    return;
}
//Destructor:
guerrero::~guerrero() {}


//------------------//


//FUNCIONES PERSONALIZADAS DE CADA SUBCLASE CONCRETA DE GUERRERO: 

//BÁRBARO:

//Retorna el nombre del rey de los bárbaros:
std::string barbaro::get_nombre_rey() const{
    return nombre_rey;
}
//Devuelve el nivel de ira que tiene el guerrero: 
int barbaro::get_ira() const{
    return ira;
}
//Demuestra imprimiendo información por consola, que está presente este tipo de guerrero:
void barbaro::esta_presente(){
    std::cout << "Tipo Guerrero: " << tipo_personaje  << " - Nombre: " << nombre_rey << " - Nivel de Experiencia: " << nivel_experiencia_guerrero << " - Principal Cualidad: " << cualidad_guerrero << " - Nivel Energía: " << energia_guerrero << " Vida: " << vida_personaje << " - Nivel ira: " << ira << std::endl;
    return;
}

//PALADIN:

//Devuelve la prioridad de un paladín: 
std::string paladin::get_prioridad() const{
    return prioridad;
}
//Retorna el arma secreta de un paladín:
std::string paladin::get_acceso() const{
    return acceso;
}
//Avisa que un paladín está presente en el juego
void paladin::esta_presente(){
    std::cout << "Tipo Guerrero: " << tipo_personaje << " - Nivel de Experiencia: " << nivel_experiencia_guerrero << " - Principal Cualidad: " << cualidad_guerrero << " - Prioridad: " << prioridad << " - Arma Secreta: " << acceso << " - Nivel Energía: " << energia_guerrero << " Vida: " << vida_personaje << std::endl;
    return;
}


//CABALLERO:

//Devuelve el nombre del caballo que monta el caballero: 
std::string caballero::get_nombre_caballo() const{
    return nombre_caballo;
}
//Retorna el material de la armadura del caballero: 
std::string caballero::get_material_armadura() const{
    return material_armadura;
}
//Avisa que el caballero está presente en el juego. 
void caballero::esta_presente(){
    std::cout << "Tipo Guerrero: " << tipo_personaje << " - Nivel de Experiencia: " << nivel_experiencia_guerrero << " - Principal Cualidad: " << cualidad_guerrero << " - Nombre Caballo: " << nombre_caballo << " - Material Armadura: " << material_armadura << " - Nivel Energía: " << energia_guerrero << " Vida: " << vida_personaje << std::endl;
    return;
}

//MERCENARIO:

//Devuelve la motivación del mercenario:
std::string mercenario::get_motivacion() const{
    return motivacion;
}
//Devuelve el contratante del mercenario: 
std::string mercenario::get_contratante() const{
    return contratante;
}
//Imprime datos por consola para demostrar que un mercenario está presente en el juego:
void mercenario::esta_presente(){
    std::cout << "Tipo Guerrero: " << tipo_personaje << " - Nivel de Experiencia: " << nivel_experiencia_guerrero << " - Principal Cualidad: " << cualidad_guerrero << " - Motivación: " << motivacion << " - Contratante: " << contratante << " - Nivel Energía: " << energia_guerrero << " Vida: " << vida_personaje << std::endl;
    return;
}

//GLADIADOR:

//Devuelve la cantidad de monstruos que venció el gladiador:
int gladiador::get_monstruos_vencidos() const{
    return monstruos_vencidos;
}
//Devuelve la ciudad donde vive el gladiador:
std::string gladiador::get_ciudad() const{
    return ciudad;
}
//El gladiador se muestra presente imprimiendo su información por consola: 
void gladiador::esta_presente(){
    std::cout << "Tipo Guerrero: " << tipo_personaje << " - Nivel de Experiencia: " << nivel_experiencia_guerrero << " - Monstruos Vencidos: " << monstruos_vencidos << " - Principal Cualidad: " << cualidad_guerrero  << " - Ciudad: " << ciudad << " - Nivel Energía: " << energia_guerrero << " Vida: " << vida_personaje << std::endl;
    return;
}
