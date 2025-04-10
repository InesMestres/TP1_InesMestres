#include <cstdlib>
#include "Ejercicio2-Header-Armas.hpp"

class PersonajeFactory {
    private:
        static std::shared_ptr<Personaje> crear_hechicero();
        static std::shared_ptr<Personaje> crear_conjurador();
        static std::shared_ptr<Personaje> crear_brujo();
        static std::shared_ptr<Personaje> crear_nigromante();
        static std::shared_ptr<Personaje> crear_barbaro();
        static std::shared_ptr<Personaje> crear_paladin();
        static std::shared_ptr<Personaje> crear_caballero();
        static std::shared_ptr<Personaje> crear_mercenario();
        static std::shared_ptr<Personaje> crear_gladiador();

        /* Llenar para armas */
    
    public: 
        static std::shared_ptr<Personaje> crear_personaje(const std::string& tipo);
        static std::shared_ptr<Armas> crear_arma(const std::string& tipo); 
        static std::shared_ptr<Personaje> crear_personaje_armado(const std::string& tipo);
    //crear en forma dinámica (run time) los objetos tipo personajes
    //crear en forma dinámica (run time) los objetos tipo arma
    //crear en forma dinámica (en run-time) los objetos tipo personajes armados (es decir, personajes que portan armas)
    //

}