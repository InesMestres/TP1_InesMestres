/*2. Juego de Rol: Los problemas 2, 3 y 4 están relacionados. No obstante, genere distintos
proyectos o folders para cada problema. Se debe obtener un código compilado distinto
en cada caso.
2.1. Interesa implementar dos grupos de armas:
i. Items Mágicos: bastón, libro de hechizos, poción y amuleto.
ii. Armas de Combate: hacha simple, hacha doble, espada, lanza y garrote.
Estas armas derivan de una interfaz única, de la cual se desprenden dos clases
abstractas. Sea creativo, las clases derivadas deberán tener al menos 5
atributos y 5 métodos.
2.2. Al mismo tiempo, se desea implementar dos grupos de personajes
i. Magos: hechicero, conjurador, brujo y nigromante.
ii. Guerreros: bárbaro, paladín, caballero, mercenario y gladiador.
Al igual que en el punto anterior, estos personajes derivan de una interfaz
única, de la cual se desprenden dos clases abstractas. Sea creativo, las clases
derivadas deberán tener al menos 5 atributos y 5 métodos.
2.3. Considerando que cualquier personaje puede utilizar cualquier arma, realice el
diagrama UML de clases de esta parte del código.*/

#include <iostream>
#include <memory>
#include "Armas.hpp"
#include "Personajes.hpp" 

int main(){

    std::shared_ptr<Arma> arma_magica = std::make_shared<amuleto>();
    arma_magica -> usar_arma();

    std::shared_ptr<Arma> arma_combate = std::make_shared<espada>();
    arma_combate -> usar_arma();
    
    std::shared_ptr<Personaje> mago = std::make_shared<nigromante>();
    mago -> esta_presente();

    std::shared_ptr<Personaje> guerrero = std::make_shared<caballero>();
    guerrero -> esta_presente();

    return 0;
}


//Diagrama UML: https://lucid.app/lucidchart/2fd95d39-606f-4370-b2b7-dc666bb6288d/edit?viewport_loc=-160%2C-266%2C2218%2C990%2C0_0&invitationId=inv_440901a6-899c-4573-aee8-1881b1f5a184 

//Diagrama UML: https://lucid.app/lucidchart/2fd95d39-606f-4370-b2b7-dc666bb6288d/edit?viewport_loc=-160%2C-266%2C2218%2C990%2C0_0&invitationId=inv_440901a6-899c-4573-aee8-1881b1f5a184 