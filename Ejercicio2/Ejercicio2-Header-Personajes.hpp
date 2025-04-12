#ifndef PERSONAJES_HPP
#define PERSONAJES_HPP
#include <iostream>
#include <string>
#include <vector>
#include <memory>


//interfaz de Personajes:

class Personaje{
    protected:
    std::vector<std::unique_ptr<Arma>> armas;
    public:
    virtual void esta_presente() = 0;
    virtual ~ Personaje(){}
    virtual void agregar_arma(std::shared_ptr<Arma> arma);
};


//Clase abstracta: Magos

class mago: public Personaje{
    protected:
    std::string tipo_mago;
    int nivel_experiencia_mago;
    std::string especialidad_mago;
    int energia_mago;
    int vida_mago;
    
    public:
    mago(std::string tipo_mago, int nivel_experiencia_mago, std::string especialidad_mago, int energia_mago, int vida_mago);
    std::string get_tipo_mago() const;
    int get_nivel_experiencia_mago() const;
    std::string get_especialidad_mago() const;
    int get_energia_mago();
    int get_vida_mago();
    void descripcion_mago();
};

//Tipos de magos: hechicero, conjurador, brujo y nigromante.

class hechicero: public mago{
    public:
    hechicero():mago("Hechicero", 4, "Magia elemental", 6, 3){}
};

class conjurador: public mago{
    public:
    conjurador():mago("Conjurador", 2, "Comunicación con criaturas", 5, 4){}
};

class brujo: public mago{
    public:
    brujo():mago("Brujo", 8, "Magia oscura", 7, 3){}
};

class nigromante: public mago{
    public:
    nigromante():mago("nigromante", 10, "Muerte", 6, 5){}
};




//Clase Abstracta: guerreros

class guerrero: public Personaje{
    protected:
    std::string tipo_guerrero;
    int nivel_experiencia_guerrero;
    std::string cualidad_guerrero;
    int energia_guerrero;
    int vida_guerrero;
    
    public:
    guerrero(std::string tipo_guerrero, int nivel_experiencia_guerrero, std::string especialidad_guerrero, int energia_guerrero, int vida_guerrero);
    std::string get_tipo_guerrero() const;
    int get_nivel_experiencia_guerrero() const;
    std::string get_cualidad_guerrero() const;
    int get_energia_guerrero();
    int get_vida_guerrero();
    void descripcion_guerrero();
};


//Tipos de guerreros: barbaro, paladín, caballero, mercenario, gladiador

class barbaro: public guerrero{
    public:
    barbaro():guerrero("Barbaro", 8, "Fuerza y resistencia", 9, 5){}
};

class paladin: public guerrero{
    public:
    paladin():guerrero("Paladín", 10, "Magia", 8, 4){}
};

class caballero: public guerrero{
    public:
    caballero():guerrero("Caballero", 5, "Noble y disciplinado", 5, 4){}
};

class mercenario: public guerrero{
    public:
    mercenario():guerrero("Mercenario", 1, "Práctivo", 7, 2){}
};

class gladiador: public guerrero{
    public:
    gladiador():guerrero("Gladiador", 4, "Combate con bestias", 6, 1){}
};

#endif