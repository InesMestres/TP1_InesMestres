#include <cstdlib>
#include "Ejercicio2-Header-Personajes.hpp"
#include "Ejercicio2-Header-Armas.hpp"
#include <memory>

class PersonajeFactory {
    private:

    //LLamadas a crear personajes
    //Magos:
    static std::shared_ptr<Personaje> crear_hechicero();
    static std::shared_ptr<Personaje> crear_conjurador();
    static std::shared_ptr<Personaje> crear_nigromante();
    static std::shared_ptr<Personaje> crear_nigromante();
    //Guerreros:
    static std::shared_ptr<Personaje> crear_barbaro();
    static std::shared_ptr<Personaje> crear_paladin();
    static std::shared_ptr<Personaje> crear_caballero();
    static std::shared_ptr<Personaje> crear_mercenario();
    static std::shared_ptr<Personaje> crear_gladiador();

    //LLamadas a crear armas:
    //Items mágicos:
    static std::shared_ptr<Arma> crear_baston();
    static std::shared_ptr<Arma> crear_libroDeHechizos();
    static std::shared_ptr<Arma> crear_pocion();
    static std::shared_ptr<Arma> crear_amuleto();
    //Armas de combate:
    static std::shared_ptr<Arma> crear_hachaSimple();
    static std::shared_ptr<Arma> crear_hachaDoble();
    static std::shared_ptr<Arma> crear_espada();
    static std::shared_ptr<Arma> crear_lanza();
    static std::shared_ptr<Arma> crear_garrote();

    //LLamadas a crear personajes_armados:
    //Magos:
    static std::shared_ptr<Personaje> crear_hechicero();
    static std::shared_ptr<Personaje> crear_conjurador();
    static std::shared_ptr<Personaje> crear_nigromante();
    static std::shared_ptr<Personaje> crear_nigromante();
    //Guerreros:
    static std::shared_ptr<Personaje> crear_barbaro();
    static std::shared_ptr<Personaje> crear_paladin();
    static std::shared_ptr<Personaje> crear_caballero();
    static std::shared_ptr<Personaje> crear_mercenario();
    static std::shared_ptr<Personaje> crear_gladiador();

    
    public: 
        static std::shared_ptr<Personaje> crear_personaje(const std::string& tipo_personaje);
        static std::shared_ptr<Arma> crear_arma(const std::string& tipo_arma);
        static std::shared_ptr<Personaje> crear_personaje_armado(const std::string& tipo_personajeArmado);

}