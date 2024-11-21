#include "Estructuras.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

Estudiante estudiante1;
Estudiante *estudiante2= NULL;



void implement_estudiante1() {
    strcpy(estudiante1.nombre, "Carlos");
    estudiante1.edad = 14;
    estudiante1.promedio = 9.1;
}


void implement_estudiante2() {
    estudiante2= (Estudiante *) malloc(sizeof(Estudiante));
    strcpy(estudiante2->nombre, "Luis");
    estudiante2->edad = 20;
    estudiante2->promedio = 9.4;
}


void mostrarestudiante() {
    Estudiante* puntE1 = &estudiante1;
    printf("El estudiante %s, con edad de %d anos, tiene un promedio de: %.2f \n",puntE1->nombre,puntE1->edad,puntE1->promedio);

    printf("El estudiante %s, con edad de %d anos, tiene un promedio de: %.2f",estudiante2->nombre,estudiante2->edad,estudiante2->promedio);
    free(estudiante2);
}



