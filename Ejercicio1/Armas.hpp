#ifndef ARMAS_HPP
#define ARMAS_HPP
#include <iostream>
#include <string>
#include <memory>


/*
Class Arma: interfaz abstracta para representar un arma en el sistema. 
Define la base para los tipos armas. 
Atributo: nombre del tipo de arma
Métodos: 
get_nombre() devuelve el nombre del tipo de arma
usar_arma() es un método virtual puro y se ejecuta cuando se utiliza el arma. 
*/
class Arma{

    protected:
        std::string nombre;

    public:
        Arma(const std::string& nombre);
        std::string get_nombre() const;
        virtual void usar_arma() = 0;
        virtual ~Arma() {}
};



/*
Clase itemMagico, hereda de clase Arma
Arma la base de representación de armas mágicas en el juego
Atributos: 
- std::string elemento_itemMagico : (tierra,aire,fuego,agua)
- std::string rareza_itemMagico : Que tan raro es (Común, Raro, Muy Raro, etc)
- std::string color_itemMagico : el color del arma mágica
- int destruccion_itemMagico : cuanta destrucción tiene el arma.
Métodos: 
- std::string get_nombre_itemMagico() const : retorna el nombre del tipo de item Magico
- std::string get_elemento_ItemMagico() const : retorna elemento del item Magico.
- std::string get_rareza_itemMagico() const: retorna rareza del item Magico.
- std::string get_color_itemMagico() const: retorna color del item Magico.
- int get_destruccion_itemMagico() const: retorna destrucción que genera el item Magico.
- void usar_arma() override: función que se ejecuta al utilizar el arma. 
- void descripcion_itemMagico(): describe el arma utilizada. 
*/

class itemMagico: public Arma{
    
    protected:
        std::string elemento_itemMagico;
        std::string rareza_itemMagico;
        std::string color_itemMagico;
        int destruccion_itemMagico;

    public:
        itemMagico(const std::string& nombre_itemMagico, const std::string& elemento_itemMagico, const std::string& rareza_itemMagico, const std::string& color_itemMagico, int destruccion_itemMagico);
        std::string get_nombre_itemMagico() const;
        std::string get_elemento_ItemMagico() const;
        std::string get_rareza_itemMagico() const;
        std::string get_color_itemMagico() const;
        int get_destruccion_itemMagico() const;
        void usar_arma() override;
        void descripcion_itemMagico();
};


/*Definciones de las subclases concretas de ItemMagico: baston, libroDeHechizos, pocion y amuleto
Heredan de clase abstracta ItemMagico. 
Representan items mágicos concretos del juego.
Cada instancia configura: nombre del tipo de arma, elemento del arma, rareza del arma, color del arma, destrucción que aporta el arma.
*/

class baston: public itemMagico{
    public:
        baston():itemMagico("Bastón", "Tierra", "Común", "Verde", 5){}
};

class libroDeHechizos: public itemMagico{
    public:
        libroDeHechizos():itemMagico("Libro de Hechizos", "Aire", "Muy Raro", "Azul", 2){}
};

class pocion: public itemMagico{
    public:
        pocion():itemMagico("Poción", "Agua", "Común", "Violeta", 4){}
};

class amuleto: public itemMagico{
    public:
        amuleto():itemMagico("Amuleto", "Tierra", "Raro", "Esmeralda", 3){}
};



/*
Clase armaDeCombate, hereda de clase Arma
Arma la base de representación de armas de combate en el juego
Atributos: 
- std::string material_armaCombate : el tipo de material del cual está hecho el instrumento de combate. 
- std::string rareza_armaCombate : Que tan raro es (Común, Raro, Muy Raro, etc)
- int destruccion_armaCombate : cuanta destrucción genera el arma.
- int precisión_armaCombate: cuanta precisión tiene el arma al enfrentarse con un enemigo. 
Métodos: 
- armaDeCombate(const std::string& nombre_armaCombate, const std::string& material_armaCombate, const std::string& rareza_armaCombate, int destruccion_armaCombate)_ constructor de arma
- std::string get_nombre_armaCombate() const: devuelve nombre del arma de combate
- std::string get_material_armaCombate() const: devuelve el material que conforma el arma.
- std::string get_rareza_armaCombate() const: devuelve la rareza del arma (Común, Raro, Muy Raro)
- int get_destruccion_armaCombate() const: devuelve cuanta destrucción genera el arma. 
- int get_precision_armaCombate() const: devuelve la precisión del arma de combate al enfrentarse con enemigos. 
- void usar_arma() override: se ejecuta cuando se utiliza el arma. 
- void descripcion_armaCombate(): describe el arma que se utiliza. 
*/

class armaDeCombate: public Arma{
    
    protected:
        std::string material_armaCombate;
        std::string rareza_armaCombate;
        int destruccion_armaCombate;
        int precision_armaCombate;

    public:
        armaDeCombate(const std::string& nombre_armaCombate, const std::string& material_armaCombate, const std::string& rareza_armaCombate, int destruccion_armaCombate, int precision_armaCombate);
        std::string get_nombre_armaCombate() const;
        std::string get_material_armaCombate() const;
        std::string get_rareza_armaCombate() const;
        int get_destruccion_armaCombate() const;
        int get_precision_armaCombate() const;
        void usar_arma() override;
        void descripcion_armaCombate();
};


/*Definciones de las subclases concretas de armaDeCombate: hachaSimple, hachaDoble, espada, lanza, garrote.
Heredan de clase abstracta armaDeCombate. 
Representan armas de combate concretas del juego.
Cada instancia configura: nombre del tipo de arma, material del arma, rareza del arma, destrucción que aporta el arma, y su precisión de ataque.
*/

class hachaSimple: public armaDeCombate{
    public:
    hachaSimple():armaDeCombate("Hacha Simple", "Madera", "Común", 3, 4){}
};

class hachaDoble: public armaDeCombate{
    public:
    hachaDoble():armaDeCombate("Hacha Doble", "Metal", "Raro", 8, 4){}
};

class espada: public armaDeCombate{
    public:
    espada():armaDeCombate("Espada", "Metal", "Muy Raro", 10, 8){}
};

class lanza: public armaDeCombate{
    public:
    lanza():armaDeCombate("Lanza", "Madera", "Raro", 7, 2){}
};

class garrote: public armaDeCombate{
    public:
    garrote():armaDeCombate("Garrote", "Madera", "Común", 6, 7){}
};

#endif