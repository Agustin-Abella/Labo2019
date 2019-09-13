#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    ///campos
    int legajo;
    char nombre[50];
    int nota;

}sPrueba;

void mostrarAlumno(sPrueba);
sPrueba pedirAlumno();
int compararAlumnoPorLegajo(sPrueba,sPrueba);



#endif // BIBLIOTECA_H_INCLUDED
