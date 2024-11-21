#include "Ejercicio1/Estructuras.h"
#include "Ejercicio2/Uniones.h"
#include "Ejercicio3/Copia_Estudiante.h"
#include "Ejercicio4/Alias_Estructuras.h"
#include "Ejercicio5/Funciones y estructuras.h"

int main() {

    /*Parte Ejercicio 1 (Estructuras)*/
    implement_estudiante1();
    implement_estudiante2();
    mostrarestudiante();

    /*Parte Ejercicio 2 (Uniones)*/
    mostrarUniones();

    /*Parte Ejercicio 3 (Copiar Estructuras)*/
    struct Estudiante2 estudiantecopia1={"Jose",23,8.89};
    mostrarEstudiantecopia(copiarEstudiante(estudiantecopia1));

    /*Parte Ejercicio 4 (Alias de estructuras)*/
    alias();
    mostrar_alias();

    /*Parte Ejercicio 5 (Funciones y Estructuras)*/

    struct Estudiante3 estudiantecopia2={"Jose",23,8.89};
    imprimirEstudiante(estudiantecopia2);
    modificarEstudiante(&estudiantecopia2);
    imprimirEstudiante(estudiantecopia2);

    return 0;
}
