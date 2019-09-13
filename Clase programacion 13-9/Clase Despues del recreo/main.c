#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define A 5

typedef struct
{
    int legajo;
    int nota;
    char nombre[50];
} sAlumno;

void mostrarAlumno(sAlumno);
sAlumno pedirAlumno();
int compararAlumnoPorLegajo(sAlumno,sAlumno);
void cargarAlumnos(sAlumno[],int);
void mostrarListadoDeAlumnos(sAlumno[],int);
void ordenarAlumnosPorNombre(sAlumno [], int );
void harcodearAlumnos(sAlumno [],int);

int main()
{
    sAlumno listaAlumnos[A];
    harcodearAlumnos(listaAlumnos,A);

    int opcion;
    do
    {
        system("cls");
        printf("1. Cargar alumnos\n");
        printf("2. Mostrar alumnos\n");
        printf("3. Ordenar alumnos\n");
        printf("4. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            system("cls");
            ///Los alumnos ya estan hardcodeados, no necesitan cargarse
            cargarAlumnos(listaAlumnos,A);
            system("pause");
            break;
        case 2:
            system("cls");
            mostrarListadoDeAlumnos(listaAlumnos,A);
            system("pause");
            break;
        case 3:
            system("cls");
            ordenarAlumnosPorNombre(listaAlumnos,A);
            break;
        }
    }
    while(opcion!=4);


    return 0;
}

void mostrarAlumno(sAlumno otroAlumno)
{
    printf("\n%d--%s--%d\n",otroAlumno.legajo,otroAlumno.nombre,otroAlumno.nota);

    otroAlumno.legajo=10000;
}

sAlumno pedirAlumno()
{
    sAlumno miAlumno;

    printf("Ingrese legajo: ");
    scanf("%d",&miAlumno.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("Ingrese nota: ");
    scanf("%d",&miAlumno.nota);

    return miAlumno;
}

int compararAlumnoPorLegajo(sAlumno unAlumno,sAlumno otroAlumno)
{
    int comp = 0;
    if(unAlumno.legajo==otroAlumno.legajo)
    {
        comp = 1;
    }
    return comp;
}

void cargarAlumnos(sAlumno lista[],int cantidad)
{
    int i;
    for(i=0; i<A; i++)
    {
        lista[i]=pedirAlumno();
    }
}

void mostrarListadoDeAlumnos(sAlumno lista [],int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        mostrarAlumno(lista[i]);
    }
}

void ordenarAlumnosPorNombre(sAlumno lista[], int cant)
{
    int i;
    int j;
    sAlumno auxAlumno;

    for (i=0; i<cant-1; i++)
    {
        for(j=i+1; j<cant; j++)
        {
            if(strcmp(lista[i].nombre,lista[j].nombre)<0)
            {
                auxAlumno = lista[i];
                lista[i]=lista[j];
                lista[j]=auxAlumno;
            }
        }
    }
}

void harcodearAlumnos(sAlumno lista[],int cant)
{
    int i;
    int legajoo[5]={888,999,777,555,666};
    int notaa[5]={8,7,6,5,9};
    char nombree[5][50]={"Juan","Maria","Jose","Pedro","Enrique"};

    for (i=0;i<cant;i++)
    {
         lista[i].legajo=legajoo[i];
         lista[i].nota=notaa[i];
         strcpy(lista[i].nombre,nombree[i]);
    }
}
