#include "Biblioteca.h"

void mostrarAlumno(sPrueba otroAlumno)
{
    printf("%d----%s----%d",otroAlumno.legajo,otroAlumno.nombre,otroAlumno.nota);

    otroAlumno.legajo=10000;
}

sPrueba pedirAlumno()
{
  sPrueba miAlumno;

    printf("Ingrese legajo: ");
    scanf("%d",&miAlumno.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("Ingrese nota: ");
    scanf("%d",&miAlumno.nota);

    return miAlumno;
}

int compararAlumnoPorLegajo(sPrueba unAlumno,sPrueba otroAlumno)
{
    int comp = 0;
    if(unAlumno.legajo==otroAlumno.legajo)
    {
        comp = 1;
    }
    return comp;
}
