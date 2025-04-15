#ifndef ARMAS_HPP
#define ARMAS_HPP
#include <iostream>
#include <string>
#include <memory>


//interfaz Armas:
class Arma{
    protected:
        std::string nombre;
    public:
        Arma(const std::string& nombre);
        std::string get_nombre() const;
        virtual void usar_arma() = 0;
        virtual ~Arma() {}
};

//Clase abstracta: items Magicos

class itemMagico: public Arma{
    protected:
    std::string elemento_itemMagico;
    int destruccion_itemMagico;
    std::string rareza_itemMagico;
    int durabilidad_itemMagico;

    public:
    itemMagico(const std::string& nombre_itemMagico, const std::string& elemento_itemMagico, int destruccion_itemMagico, const std::string& rareza_itemMagico, int durabilidad_itemMagico);
    std::string get_nombre_itemMagico() const;
    std::string get_elemento_ItemMagico() const;
    int get_destruccion_itemMagico() const;
    std::string get_rareza_itemMagico() const;
    int get_durabilidad_itemMagico() const;
    void descripcion_itemMagico();
};

//Ejemplos de items mágicos: baston, libroDeHechizos, pocion, amuleto

class baston: public itemMagico{
    public:
    baston():itemMagico("Bastón", "Tierra", 4, "Común", 5){}
};

class libroDeHechizos: public itemMagico{
    public:
    libroDeHechizos():itemMagico("Libro de Hechizos", "Aire", 10, "Muy Raro", 2){}
};

class pocion: public itemMagico{
    public:
    pocion():itemMagico("Poción", "Agua", 4, "Común", 4){}
};

class amuleto: public itemMagico{
    public:
    amuleto():itemMagico("Amuleto", "Tierra", 8, "Raro", 3){}
};



//Clase abstracta: Armas de Combate

class armaDeCombate: public Arma{
    protected:
    std::string material_armaCombate;
    int destruccion_armaCombate;
    std::string rareza_armaCombate;
    int precision_armaCombate;

    public:
    armaDeCombate(const std::string& nombre_armaCombate, const std::string& material_armaCombate, int destruccion_armaCombate, const std::string& rareza_armaCombate, int precision_armaCombate);
    std::string get_nombre_armaCombate() const;
    std::string get_material_armaCombate() const;
    int get_destruccion_armaCombate() const;
    std::string get_rareza_armaCombate() const;
    int get_precision_armaCombate() const;
    void descripcion_armaCombate();
};


//Ejemplos de armas de combate: hacha simple, hacha doble, espada, lanza y garrote.

class hachaSimple: public armaDeCombate{
    public:
    hachaSimple():armaDeCombate("Hacha Simple", "Madera", 4, "Común", 3){}
};

class hachaDoble: public armaDeCombate{
    public:
    hachaDoble():armaDeCombate("Hacha Doble", "Metal", 8, "Raro", 5){}
};

class espada: public armaDeCombate{
    public:
    espada():armaDeCombate("Espada", "Metal", 10, "Muy Raro", 8){}
};

class lanza: public armaDeCombate{
    public:
    lanza():armaDeCombate("Lanza", "Madera", 7, "Raro", 2){}
};

class garrote: public armaDeCombate{
    public:
    garrote():armaDeCombate("Garrote", "Madera", 6, "Común", 7){}
};

#endif