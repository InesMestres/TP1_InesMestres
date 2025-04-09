#include "EntidadOrganizativa.hpp"
#include <memory>

//Métodos de Entidad Organizativa:

EntidadOrganizativa::EntidadOrganizativa(const std::string& nombre_entidad_organizativa){
    nombre = nombre_entidad_organizativa;
}

void EntidadOrganizativa::agregar_subentidad(std::shared_ptr<EntidadOrganizativa> subentidad){
    subentidades.push_back(subentidad);
}

int EntidadOrganizativa::contarSubentidades() const{
    return subentidades.size();
}

std::string EntidadOrganizativa::get_nombre() const{
    return nombre;
}


//Funciones de Central Regional
//Hereda de Entidad Organizativa y tiene elementos compuestos: GerenteMedio y gerenteAlto 

CentralRegional::CentralRegional(const std::string& nombre_entidad_organizativa):EntidadOrganizativa(const std::string& nombre_entidad_organizativa){
}

int CentralRegional::getCantEmpleados(){
    int total_empleados = gerentesAlto.size() + gerentesMedio.size();
    return total_empleados;
}

std::string CentralRegional::getEmpNames(){
    std::string string_empresas = "";
    for(int i = 0; i <= empresas.size(); i++){
        string_empresas += empresas(i) -> get_nombre(); 
    }
    return string_empresas;
}

void CentralRegional::getGerentesAlto() const{
    for(int i = 0; i < gerentesAlto.size(); i++){
        std::cout << "Gerente Alto " << i << ": " gerentesAlto[i] -> get_nombre() << std::endl;
    }
    return nullptr;
}


void CentralRegional::getGerentesMedio() const{
    for(int i = 0; i < gerentesMedio.size(); i++){
        std::cout << "Gerente Medio " << i << ": " gerentesMedio[i] -> get_nombre() << std::endl;
    }
    return;
}

void CentralRegional::agregarPais(std::string pais){
    paises.pushback(pais);
    std::cout<<"Se ha agregado una ubicación en el país: " << pais << "a la central." << std::endl;
    return;
}

void CentralRegional::agregarGerenteAlto(shared_ptr<GerenteAlto> gerenteAlto){
    gerentesAlto.pushback(gerenteAlto);
    std::cout<<"Se ha agregado el gerente alto: " << gerenteAlto -> get_nombre()  << std::endl;
    return;
}

void CentralRegional::agregarGerenteMedio(shared_ptr<GerenteMedio> gerenteMedio){
    gerentesAlto.pushback(gerenteMedio);
    std::cout<<"Se ha agregado el gerente medio: " << gerenteMedio -> get_nombre()  << std::endl;
    return;
}

void CentralRegional::agregarEmpresa(shared_ptr<Empresa> empresa){
    empresas.pushback(empresa);
    std::cout<<"Se ha agregado la empresa: " << empresa -> get_nombre() << "a la Central Regional." << std::endl;
    return;
}


