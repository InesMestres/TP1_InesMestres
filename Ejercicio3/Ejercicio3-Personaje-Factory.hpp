#include <cstdlib>
#include "Ejercicio2-Header-Personajes.hpp"
#include "Ejercicio2-Header-Armas.hpp"
#include <memory>

class PersonajeFactory {
    private:
        //LLamadas a crear personajes
        //Magos:
        static std::shared_ptr<Personaje> crear_hechicero(std::string tipo_personaje);
        static std::shared_ptr<Personaje> crear_conjurador(std::string tipo_personaje);
        static std::shared_ptr<Personaje> crear_brujo(std::string tipo_personaje);
        static std::shared_ptr<Personaje> crear_nigromante(std::string tipo_personaje);
        //Guerreros:
        static std::shared_ptr<Personaje> crear_barbaro(std::string tipo_personaje);
        static std::shared_ptr<Personaje> crear_paladin(std::string tipo_personaje);
        static std::shared_ptr<Personaje> crear_caballero(std::string tipo_personaje);
        static std::shared_ptr<Personaje> crear_mercenario(std::string tipo_personaje);
        static std::shared_ptr<Personaje> crear_gladiador(std::string tipo_personaje);

        //LLamadas a crear armas:
        //Items mágicos:
        static std::shared_ptr<Arma> crear_baston(std::string tipo_arma);
        static std::shared_ptr<Arma> crear_libroDeHechizos(std::string tipo_arma);
        static std::shared_ptr<Arma> crear_pocion(std::string tipo_arma);
        static std::shared_ptr<Arma> crear_amuleto(std::string tipo_arma);
        //Armas de combate:
        static std::shared_ptr<Arma> crear_hachaSimple(std::string tipo_arma);
        static std::shared_ptr<Arma> crear_hachaDoble(std::string tipo_arma);
        static std::shared_ptr<Arma> crear_espada(std::string tipo_arma);
        static std::shared_ptr<Arma> crear_lanza(std::string tipo_arma);
        static std::shared_ptr<Arma> crear_garrote(std::string tipo_arma);

    
    public: 
        //Funciones para crear personaje, arma y personaje armado:  
        static std::shared_ptr<Personaje> crear_personaje(const std::string& tipo_personaje);
        static std::shared_ptr<Arma> crear_arma(const std::string& tipo_arma);
        static std::shared_ptr<Personaje> crear_personaje_armado(const std::string& tipo_personajeArmado, int cantidadArmas);

};
 