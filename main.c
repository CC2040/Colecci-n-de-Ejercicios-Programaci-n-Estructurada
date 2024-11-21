#include "Ejercicio1/Estructuras.h"
#include "Ejercicio2/Uniones.h"
#include "Ejercicio3/Copia_Estudiante.h"

int main() {

    /*Parte Ejercicio 1 (Estructuras)*/
    implement_estudiante1();
    implement_estudiante2();
    mostrarestudiante();

    /*Parte Ejercicio 2 (Uniones)*/
    mostrarUniones();

    /*Parte Ejercicio 3 (Copiar Estructuras)*/
    struct Estudiante estudiantecopia1={"Jose",23,8.89};
    mostrarEstudiantecopia(copiarEstudiante(estudiantecopia1));

    return 0;
}
