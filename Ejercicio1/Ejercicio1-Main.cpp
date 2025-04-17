
#include <iostream>
#include <memory>
#include "Armas.hpp"
#include "Personajes.hpp" 

int main(){
    
    //Creo un arma de tipo amuleto (mágica):
    std::shared_ptr<Arma> arma_magica = std::make_shared<amuleto>();
    arma_magica -> usar_arma();

    //Creo un arma  de tipo espada (de combate):
    std::shared_ptr<Arma> arma_combate = std::make_shared<espada>();
    arma_combate -> usar_arma();
    
    //Creo un personaje de tipo nigromante (mago):
    std::shared_ptr<Personaje> mago = std::make_shared<nigromante>();
    mago -> esta_presente();

    //Creo un personaje de tipo caballero (guerrero):
    std::shared_ptr<Personaje> guerrero = std::make_shared<caballero>();
    guerrero -> esta_presente();

    return 0;
}

