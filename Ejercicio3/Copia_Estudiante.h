#ifndef COPIA_ESTUDIANTE_H
#define COPIA_ESTUDIANTE_H

struct Estudiante {
    char nombre[20];
    int edad;
    float promedio;
};

struct Estudiante copiarEstudiante(struct Estudiante est);
void mostrarEstudiantecopia(struct Estudiante est);

#endif //COPIA_ESTUDIANTE_H
