#include "Ejercicio2-Header-Personajes.hpp"
#include "Ejercicio2-Header-Armas.hpp"

/*2. En un escenario del juego de rol del ejercicio 2, se desea generar en forma automática
una cantidad determinada de personajes con armas. Para lograr esto, deberá:
Trabajo Práctico #1 - OOP I102 – Paradigmas de Programación
2
2.1. Investigar el funcionamiento del generador de números aleatorios std::rand()
(vea las librerías cstdlib y ctime). Con este, genere dos números enteros
aleatorios. El primer número en el rango de 3-7 y el otro de 0-2.
2.2. Con el punto anterior, obtenga dos valores entre 3 y 7 para indicar la cantidad
de personajes tipo Mago y la cantidad de personajes tipo Guerrero. Luego, para
cada uno de estos personajes, obtenga un nuevo valor aleatorio entre 0 y 2 que
indique cuantas armas tendrá cada uno de estos personajes.
2.3. Teniendo en cuenta que un personaje “has-a” arma, es decir existe una
composición entre ellos. Escriba una clase denominada “PersonajeFactory” que:
i. Permita crear en forma dinámica (en run-time) los objetos tipo
personajes.
ii. Permita crear en forma dinámica (en run-time) los objetos tipo armas.
iii. Permita crear en forma dinámica (en run-time) los objetos tipo
personajes armados (es decir, personajes que portan armas).
Se prefiere que estas clases no tengan que ser instanciadas para retornar los
objetos solicitados y que en lo posible utilicen smart pointers.
La idea es que esta clase deberá de crear un objeto, digamos un caballero, al
recibir un parámetro que indique que se quiere este tipo de objeto. Luego,
basándose en conceptos de polimorfismo, esta función devolverá un puntero
al objeto requerido.*/

#include <cstdlib>
#include <ctime>

//Genero dos numeros aleatorios:

std::rand(std::time(nullptr));

//Rango: 3-7
int numeroAleatorio_3_7(){
    int numAleatorio = std::rand() % (7- 3 + 1);
    return numAleatorio;
} 

//Rango 0-3
int numeroAleatorio_0_3(){
    int numAleatorio = std::rand() % 3;
    return numAleatorio;
} 


/*2.2. Con el punto anterior, obtenga dos valores entre 3 y 7 para indicar la cantidad
de personajes tipo Mago y la cantidad de personajes tipo Guerrero. Luego, para
cada uno de estos personajes, obtenga un nuevo valor aleatorio entre 0 y 2 que
indique cuantas armas tendrá cada uno de estos personajes.*/

int cantidad_tipoMagos = numeroAleatorio_3_7();
int cantidad_tipoGuerreros = numeroAleatorio_3_7();

int cantidad_ArmasMagos = numeroAleatorio_0_3();
int cantidad_ArmasGuerreros = numeroAleatorio_0_3();


/*2.3. Teniendo en cuenta que un personaje “has-a” arma, es decir existe una
composición entre ellos. Escriba una clase denominada “PersonajeFactory” que:
i. Permita crear en forma dinámica (en run-time) los objetos tipo
personajes.
ii. Permita crear en forma dinámica (en run-time) los objetos tipo armas.
iii. Permita crear en forma dinámica (en run-time) los objetos tipo
personajes armados (es decir, personajes que portan armas).
Se prefiere que estas clases no tengan que ser instanciadas para retornar los
objetos solicitados y que en lo posible utilicen smart pointers.
La idea es que esta clase deberá de crear un objeto, digamos un caballero, al
recibir un parámetro que indique que se quiere este tipo de objeto. Luego,
basándose en conceptos de polimorfismo, esta función devolverá un puntero
al objeto requerido.*/


