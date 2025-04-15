#ifndef PERSONAJES_HPP
#define PERSONAJES_HPP
#include <iostream>
#include <string>
#include <vector>
#include <memory>

// interfaz de Personajes:

class Personaje
{
protected:
    std::string tipo_personaje;
    std::vector<std::shared_ptr<Arma>> armas;
    int vida_personaje;

public:
    Personaje(std::string tipo, int vida);
    std::string get_tipo_personaje() const;
    virtual void esta_presente() = 0;
    virtual ~Personaje() {}
    virtual void agregar_arma(std::shared_ptr<Arma> arma);
    int get_vida();
    virtual int perder_vida(int cantidad_vidas);
    void atacar_personaje(std::shared_ptr<Personaje> atacado);
};

// Clase abstracta: Magos

class mago : public Personaje
{
protected:
    int nivel_experiencia_mago;
    std::string especialidad_mago;
    int energia_mago;

public:
    mago(std::string tipo_mago, int nivel_experiencia_mago, std::string especialidad_mago, int energia_mago, int vida_mago) : Personaje(tipo_mago, vida_mago) {};
    int get_nivel_experiencia_mago() const;
    std::string get_especialidad_mago() const;
    int get_energia_mago();
    void descripcion_mago();
};

// Tipos de magos: hechicero, conjurador, brujo y nigromante.

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

// Clase Abstracta: guerreros

class guerrero : public Personaje
{
protected:
    int nivel_experiencia_guerrero;
    std::string cualidad_guerrero;
    int energia_guerrero;

public:
    guerrero(std::string tipo_guerrero, int nivel_experiencia_guerrero, std::string especialidad_guerrero, int energia_guerrero, int vida_guerrero) : Personaje(tipo_guerrero, vida_guerrero);
    int get_nivel_experiencia_guerrero() const;
    std::string get_cualidad_guerrero() const;
    int get_energia_guerrero();
    void descripcion_guerrero();
};

// Tipos de guerreros: barbaro, paladín, caballero, mercenario, gladiador

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