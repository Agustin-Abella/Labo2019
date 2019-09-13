#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int main()
{
    sPrueba miAlumno;
    sPrueba otroAlumno;

    miAlumno=pedirAlumno();
    otroAlumno=pedirAlumno();

    if(compararAlumnoPorLegajo(miAlumno,otroAlumno))
    {
        printf("Los legajos son iguales\n");
    }else
    {
        printf("No son iguales\n");
    }

    mostrarAlumno(miAlumno);
    return 0;
}
/*
    ORDENAMIENTO
    int i;
    int j;
    int auxInt;
    float auxFloat;
    char auxChar;

    for(i=0; i<cantidad - 1; i++)
	{
		for(j=i+1; j<cantidad; j++)
		{
			if(promedio[i]<promedio[j])
			{
			    auxFloat = promedio[i];
				promedio[i] = promedio[j];
				promedio[j] = aux;
			}
		}
	}
	*/

