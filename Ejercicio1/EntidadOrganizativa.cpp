#include <iomanip>
#define ENTIDADORGANIZATIVA_H
#include ENTIDADORGANIZATIVA_H
#include <string>
#include <vector>




//Entidad organizativa tiene relación de herencia con la CentralRegional y con la Empresa


class EntidadOrganizativa{
    private:
    std::string nombre;
    std::vector<std::string> subentidades;
    public:
    void agregar_subentidad();
    int contarSubentidades();

};

class CentralRegional: public EntidadOrganizativa{
    private:
    std::vector<std::string> paises;
    int cantidadEmpleados;
    std::vector<std::string> gerentesAlto;
    std::vector<std::string> gerentesMedio;
    std::vector<std::string> empresas;

    public:
    int getCantEmpleados();
    std::string getEmpNames();
    void getGerentesAlto();
    void getGerentesMedio();
};

class Empresa: public EntidadOrganizativa{
    private:
    std::string direccion;
    std::vector<int> departamentos;
    public: 
    std::string getDepByName();
    std::vector<std::string> getDepNames();

};

