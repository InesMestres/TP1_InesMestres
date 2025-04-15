#ifndef PERSONAJES_HPP
#define PERSONAJES_HPP
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Armas.hpp"


/*
Class Personaje: interfaz abstracta para representar personajes en el juego.  
Define la base para los tipos de personajes: magos y guerreros. 
Atributos:
- std::string tipo_personaje: tipo de personaje (dentro de los magos y guerreros, hay varios personajes concretos)
- std::vector<std::shared_ptr<Arma>> armas: vector que se inicializa como vacío y contiene las armas que se le asignan al personaje.
- int vida_personaje: cantidad de vida que le queda al personaje. 
Métodos: 
- Personaje(std::string tipo, int vida): constructor del personaje
- virtual void esta_presente() = 0 : método virtual puro que muestra la presencia del personaje en batalla.
- std::string get_tipo_personaje() const: retorna el tipo de personaje
- int get_vida(): retorna la vida actual del personaje. 
- virtual void agregar_arma(std::shared_ptr<Arma> arma): agrega arma a vector de armas del personaje
- virtual int perder_vida(int cantidad_vidas): resta vida al personaje segun daño que recibe.
- void atacar_personaje(std::shared_ptr<Personaje> atacado): permite atacar a personaje en el juego, aplicando daño. 
- virtual ~Personaje() {} : destructor virtual
*/
class Personaje
{
protected:
    std::string tipo_personaje;
    std::vector<std::shared_ptr<Arma>> armas;
    int vida_personaje;

public:
    Personaje(const std::string& tipo, int vida);
    virtual void esta_presente() = 0;
    std::string get_tipo_personaje() const;
    int get_vida();
    virtual void agregar_arma(std::shared_ptr<Arma> arma);
    virtual int perder_vida(int cantidad_vidas);
    void atacar_personaje(std::shared_ptr<Personaje> atacado);
    virtual ~Personaje() {}
};




/*
Clase abstracta Magos, hereda de clase Personaje
Arma la base de representación de personajes de tipo mago en el juego
Atributos: 
- int nivel_experiencia_mago: nivel de experiencia que tiene el mago
- std::string especialidad_mago: la especialidad del tipo de mago presentado.
- int energia_mago: la cantidad de energía que tiene el mago. 
Métodos: 
- mago(std::string tipo_mago, int nivel_experiencia_mago, std::string especialidad_mago, int energia_mago, int vida_mago) : Personaje(tipo_mago, vida_mago) {}: constructor de mago.
- int get_nivel_experiencia_mago() const: retorna nivel de experiencia del mago.
- std::string get_especialidad_mago() const: devuelve la especialidad del mago.
- int get_energia_mago(): devuelve la energía que tiene el mago para afrontar combates. 
- void descripcion_mago(): permite describir el mago. 
*/


class mago : public Personaje
{
protected:
    int nivel_experiencia_mago;
    std::string especialidad_mago;
    int energia_mago;

public:
    mago(std::string tipo_mago, int nivel_experiencia_mago, std::string especialidad_mago, int energia_mago, int vida_mago);
    void esta_presente() override;
    int get_nivel_experiencia_mago() const;
    std::string get_especialidad_mago() const;
    int get_energia_mago();
};


/*Subclases concretas de la clase abstracta Mago
Representan los tipos de magos concretos disponibles en el juego (hechicero, conjurador, brujo, nigromante).
Cada uno posee atributos: tipo de mago, nivel de experiencia, especialidad mágica, energía y vida actual.ADJ_OFFSET_SINGLESHOT
*/


class hechicero : public mago
{
public:
    hechicero() : mago("Hechicero", 4, "Magia elemental", 6, 100) {}
};

class conjurador : public mago
{
public:
    conjurador() : mago("Conjurador", 2, "Comunicación con criaturas", 5, 100) {}
};

class brujo : public mago
{
public:
    brujo() : mago("Brujo", 8, "Magia oscura", 7, 100) {}
};

class nigromante : public mago
{
public:
    nigromante() : mago("nigromante", 10, "Muerte", 6, 100) {}
};






/*
Clase abstracta guerrero, hereda de clase Personaje
Arma la base de representación de personajes de tipo guerrero en el juego
Atributos: 
- int nivel_experiencia_guerrero: nivel de experiencia  del guerrero.
- std::string cualidad_guerrero: cualidad principal que posee este tipo de guerrero.
- int energia_guerrero: la cantidad de energía que posee el guerrero. 
Métodos: 
- guerrero(std::string tipo_guerrero, int nivel_experiencia_guerrero, std::string especialidad_guerrero, int energia_guerrero, int vida_guerrero) : constructor que inicializa guerrero, y sus atributos y métodos heredados y propios.
- int get_nivel_experiencia_guerrero() const: retorna el nivel de experiencia del guerrero.
- std::string get_cualidad_guerrero() const: retorna la cualidad principal del guerrero.
- int get_energia_guerrero(): retorna la energía que tiene el guerrero para afrontar combates. 
- void descripcion_guerrero(): describe el guerrero por consola. 
*/

class guerrero : public Personaje
{
protected:
    int nivel_experiencia_guerrero;
    std::string cualidad_guerrero;
    int energia_guerrero;

public:
    guerrero(std::string tipo_guerrero, int nivel_experiencia_guerrero, std::string cualidad_guerrero, int energia_guerrero, int vida_guerrero);
    int get_nivel_experiencia_guerrero() const;
    std::string get_cualidad_guerrero() const;
    int get_energia_guerrero();
};



/*Subclases concretas de la clase abstracta guerrero
Representan los tipos de guerreros concretos disponibles en el juego (barbaro, paladín, caballero, mercenario, gladiador).
Cada uno posee atributos: tipo de guerrero, nivel de experiencia, una cualidad del guerrero, energía y vida actual.
*/

class barbaro : public guerrero
{
public:
    barbaro() : guerrero("Barbaro", 8, "Fuerza y resistencia", 9, 100) {}
};

class paladin : public guerrero
{
public:
    paladin() : guerrero("Paladín", 10, "Magia", 8, 100) {}
};

class caballero : public guerrero
{
public:
    caballero() : guerrero("Caballero", 5, "Noble y disciplinado", 5, 100) {}
};

class mercenario : public guerrero
{
public:
    mercenario() : guerrero("Mercenario", 1, "Práctivo", 7, 100) {}
};

class gladiador : public guerrero
{
public:
    gladiador() : guerrero("Gladiador", 4, "Combate con bestias", 6, 100) {}
};

#endif