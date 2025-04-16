
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