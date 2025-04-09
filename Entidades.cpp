#include "EntidadOrganizativa.hpp"
#include <memory>

//Entidad Organizativa:

EntidadOrganizativa::EntidadOrganizativa(const std::string& nombre_entidad_organizativa){
    nombre = nombre_entidad_organizativa;
}

void EntidadOrganizativa::agregar_subentidad(std::shared_ptr<EntidadOrganizativa> subentidad){
    subentidades.pushback(subentidad);
}

int EntidadOrganizativa::contarSubentidades() const{
    return subentidades.size();
}

std::string EntidadOrganizativa::get_nombre() const{
    return nombre;
}


