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

//Funciones de empresa:

Empresa::Empresa(const std::string& nombre, const std::string& direccion_empresa):EntidadOrganizativa(const std::string& nombre_entidad_organizativa){
    direccion = direccion_empresa;
}

std::string Empresa::getDepByName(const std::string& nombreDepartamento){
    for(int i = 0; i <= departamentos.size(); i++){
        if(nombreDepartamento == departamentos[i] -> get_nombre()){
            return departamentos[i] -> get_direccion();
        }
    }
    std::cout << "No se ha encontrado un departamento con nombre: " << nombreDepartamento << std::endl;
    return "";
}

std::vector<std::shared_ptr<Departamento>> Empresa::getDepNames() const{
    return departamentos;
}

void Empresa::agregarDepartamento(std::shared_ptr<Departamento> departamento_nuevo){
    departamentos().push_back(departamento_nuevo);
}

//Departamento

int Departamento::contarEmpleados(){
    return empleados.size();
}

std::vector<std::shared_ptr<Empleado>> Departamento::getEmployees() const{
    return empleados;
}

bool Departamento::contratarEmpleado(std::smart_ptr<Empleado> empleado){
    empleados.push_back(empleado);
    std::cout << "Se contrató el empleado: " << empleado << std::endl;
    return true;
}

bool Departamento::despedirEmpleado(std::smart_ptr<Empleado> empleado){
    for(int i = 0; i <= empleados.size(); i++){
        if(empleado == empleados[i]){
            empleados.erase(empleados.begin() + i);
            std::cout << "Se despidió el empleado: " << empleado << std::endl;
            return true
        }
    }
    return false;
}


