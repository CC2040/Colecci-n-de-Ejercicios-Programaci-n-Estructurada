#include "Copia_Estudiante.h"
#include <stdio.h>
#include<string.h>


struct Estudiante2 copiarEstudiante(struct Estudiante2 est) {
    struct Estudiante2 nuevoEst;
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
}

void mostrarEstudiantecopia(struct Estudiante2 copia) {
    printf("Parte de copia de estructuras\n");
    printf("El estudiante %s, con edad de %d anos, tiene un promedio de: %.2f \n",copia.nombre,copia.edad,copia.promedio);
}

