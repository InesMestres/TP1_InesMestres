#ifndef ARMAS_HPP
#define ARMAS_HPP
#include <iostream>
#include <string>


//interfaz: virtual Armas
//salen de ahi dos tipos de armas:
//items magicos: bastón, libro de hechizos, poción y amuleto.
//Armas de Combate: hacha simple, hacha doble, espada, lanza y garrote.
//5 atributos y métodos


//interfaz Armas:
class Armas{
    public:
    virtual void usar_arma() = 0;
    virtual ~ Armas(){}
};




//Clase abstracta: itemsMagicos

class itemMagico: public Armas{
    protected:
    std::string nombre_itemMagico;
    std::string elemento_itemMagico;
    int destruccion_itemMagico;
    std::string rareza_itemMagico;
    int durabilidad_itemMagico;

    public:
    itemMagico(std::string nombre_itemMagico, std::string elemento_itemMagico, int destruccion_itemMagico, std::string rareza_itemMagico, int durabilidad_itemMagico);
    std::string get_nombre_itemMagico() const;
    std::string get_elemento_ItemMagico() const;
    int get_destruccion_itemMagico(std::string nombre_itemMagico) const;
    std::string get_rareza_itemMagico();
    void descripcion_itemMagico(std::string nombre_itemMagico, std::string elemento_itemMagico, int destruccion_itemMagico, std::string rareza_itemMagico,int durabilidad);
};

//Ejemplos de items mágicos:

class baston: public itemMagico{
    private:
    std::string nombre_itemMagico = "Bastón";
    std::string elemento_itemMagico = "Tierra";
    int destruccion_itemMagico = 4;
    std::string rareza_itemMagico = "Común";
    int durabilidad = 5;

    public:
    baston:itemMagico(std::string nombre_itemMagico, std::string elemento_itemMagico, int destruccion_itemMagico, std::string rareza_itemMagico, int durabilidad);
};

class libroDeHechizos: public itemMagico{
    private:
    std::string nombre_itemMagico = "Libro de Hechizos";
    std::string elemento_itemMagico = "Aire";
    int destruccion_itemMagico = 10;
    std::string rareza_itemMagico = "Muy Raro";
    int durabilidad = 2;

    public:
    baston:itemMagico(std::string nombre_itemMagico, std::string elemento_itemMagico, int destruccion_itemMagico, std::string rareza_itemMagico, int durabilidad);
};

class pocion: public itemMagico{
    private:
    std::string nombre_itemMagico = "Poción";
    std::string elemento_itemMagico = "Agua";
    int destruccion_itemMagico = 4;
    std::string rareza_itemMagico = "Común";
    int durabilidad = 4;

    public:
    pocion:itemMagico(std::string nombre_itemMagico, std::string elemento_itemMagico, int destruccion_itemMagico, std::string rareza_itemMagico, int durabilidad);
};

class amuleto: public itemMagico{
    private:
    std::string nombre_itemMagico = "Amuleto";
    std::string elemento_itemMagico = "Tierra";
    int destruccion_itemMagico = 8;
    std::string rareza_itemMagico = "Raro";
    int durabilidad = 3;

    public:
    amuleto:itemMagico(std::string nombre_itemMagico, std::string elemento_itemMagico, int destruccion_itemMagico, std::string rareza_itemMagico, int durabilidad);
};

#endif