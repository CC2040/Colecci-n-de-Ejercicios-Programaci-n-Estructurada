#include "Alias_Estructuras.h"
#include <string.h>
#include <stdio.h>

Estudiante1 estudiante3;

void alias() {
    strcpy(estudiante3.nombre, "Pedro");
    estudiante3.edad = 25;
    estudiante3.promedio = 9.7;
}

void mostrar_alias() {
    Estudiante1 *puntero = &estudiante3;
    printf("Parte Ejercicio 4 \n");
    printf("El estudiante %s, con edad de %d anos, tiene un promedio de: %.2f \n",puntero->nombre,puntero->edad,puntero->promedio);
}

