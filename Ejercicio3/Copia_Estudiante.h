#ifndef COPIA_ESTUDIANTE_H
#define COPIA_ESTUDIANTE_H

struct Estudiante2 {
    char nombre[20];
    int edad;
    float promedio;
};

struct Estudiante2 copiarEstudiante(struct Estudiante2 est);
void mostrarEstudiantecopia(struct Estudiante2 est);

#endif //COPIA_ESTUDIANTE_H
