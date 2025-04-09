#ifdef ENTIDADORGANIZATIVA_HPP
#define ENTIDADORGANIZATIVA_HPP

#include <string>
#include <vector>
#include <memory>

//Para resolver las dependencias:
class Empresa;
class Departamento;
class GerenteAlto;
class GerenteMedio;


//Entidad organizativa
//Tiene relación de herencia con la CentralRegional y con la Empresa

class EntidadOrganizativa{
    private:
        std::string nombre;
        std::vector<std::shared_ptr<EntidadOrganizativa>> subentidades;
    public:
        EntidadOrganizativa(const std::string& nombre_entidad_organizativa);
        void agregar_subentidad(std::shared_ptr<EntidadOrganizativa> subentidad);
        int contarSubentidades() const;
        std::string get_nombre() const;
};


//Central Regional
//Hereda de Entidad Organizativa y tiene elementos compuestos: GerenteMedio y gerenteAlto 
class CentralRegional: public EntidadOrganizativa{
    private:
    std::vector<std::string> paises;
    int cantidadEmpleados = 0;
    std::vector<std::shared_ptr<GerenteAlto>> gerentesAlto;
    std::vector<std::shared_ptr<GerenteMedio>> gerentesMedio;
    std::vector<std::shared_ptr<Empresa>> empresas;

    public:
    CentralRegional(const std::string& nombre);
    //Gets:
    int getCantEmpleados();
    std::string getEmpNames();
    void getGerentesAlto() const;
    void getGerentesMedio() const;
    //sets/modificaciones:
    void agregarPais(std::string pais);
    void agregarGerenteAlto(shared_ptr<GerenteAlto> gerenteAlto);
    void agregarGerenteMedio(shared_ptr<GerenteMedio> gerenteMedio);
    void agregarEmpresa(shared_ptr<Empresa> empresa);

};


//hereda de EntidadOrganizativa y esta compuesto por elementos de Departamento. 
class Empresa: public EntidadOrganizativa{
    private:
    std::string direccion;
    std::vector<std::shared_ptr<Departamento>> departamentos;
    public: 
    Empresa(string direccion);
    std::string getDepByName(std::string nombreDepartamento& const);
    std::vector<std::shared_ptr<Departamento>> getDepNames() const;
    void agregarDepartamento(std::shared_ptr<Departamento>);
};


class Departamento{
    protected:
    std::string nombre;
    std::string ubicacion;
    std::vector<std::smart_ptr> empleados;
    int cantidadEmpleadosDepts;

    public:
    int contarEmpleados();
    std::smart_ptr<Empleado> getEmployees();
    bool contratarEmpleado(std::smart_ptr<Empleado> empleado);
    bool despedirEmpleado(std::smart_ptr<Empleado> empleado);
}

//Empleado 
class Empleado: {
    protected:
    std::string nombre;
    std::string puesto;
    int ambiguedad;
    float salario;
    public:
    Empleado(const std::string& nombre, const std::string& puesto);
    int getAmbiguedad();
    bool updateSalario(float salarioNuevo);
    float getSalario();
};


//El manager hereda de Empleado (es un empleado):
class Manager: public Empleado{
    private:
    float bono;
    std::string level;
    public:
    Manager()
    bool updateBono();
    int getBono();
    bool setLevel(std::string);
};

//Puestos que heredan de manager:
class GerenteAlto: public Manager{
    
};
class GerenteMedio public Manager{

};
class GerenteBajo public Manager{

};
class LiderEquipo public Manager{

};


#endif