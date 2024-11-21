#include "Funciones y estructuras.h"
#include <stdio.h>

void imprimirEstudiante(struct Estudiante3 est) {
    printf("Parte Ejercicio 5 \n");
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}


void modificarEstudiante(struct Estudiante3 *est) {
    est->edad = 30;
}


void imprimirEstudiante2(struct Estudiante3 *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}
