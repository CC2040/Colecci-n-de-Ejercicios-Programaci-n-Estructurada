#ifndef FUNCIONES_Y_ESTRUCTURAS_H
#define FUNCIONES_Y_ESTRUCTURAS_H

struct Estudiante3 {
    char nombre[20];
    int edad;
    float promedio;

};

void imprimirEstudiante(struct Estudiante3 est);
void modificarEstudiante(struct Estudiante3 *est);
void imprimirEstudiante2(struct Estudiante3 *est);

#endif //FUNCIONES_Y_ESTRUCTURAS_H
