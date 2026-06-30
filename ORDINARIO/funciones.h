
#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "structs.h"

int modificarPersona(struct Persona *Alumno){

    if(Alumno == NULL){
        return 0;

    }

    printf("\nNuevo nombre: ");
    scanf(" ");
    fgets(Alumno->nombre,50,stdin);
    printf("Nueva edad: ");
    scanf("%d",&Alumno->edad);
    printf("Nuevo genero: ");
    scanf(" %c",&Alumno->genero);
    printf("Nueva fecha: ");
    scanf("%s",Alumno->fecha);
    printf("\nDatos modificados");

    return 0;
}

int modificarAlumno(struct Persona *Alumno){

    if(Alumno == NULL){
        return 0;
    }

    printf("\nNuevo semestre: ");
    scanf("%d",&Alumno->PtrAl->semestre);
    printf("\nNueva carrera");
    Alumno->PtrAl->carrera=menuCarreras();
    printf("\nDatos modificados");

    return 0;
}

int modificarParcial(struct Persona *Alumno){

    int materia;
    int parcial;
    float nuevaCalif;
    if(Alumno == NULL){
        return 0;

    }

    printf("\nMateria: ");
    scanf("%d",&materia);
    printf("\nParcial: ");
    scanf("%d",&parcial);
    printf("\nNueva calificacion: ");
    scanf("%f",&nuevaCalif);
    materia = materia - 1;
    parcial = parcial - 1;
    Alumno->PtrAl->calif[materia][parcial] = nuevaCalif;
    printf("\nSe cambio la calificacion");
    return 0;

}

int modificarMateria(struct Persona *Alumno){

    int materia;
    if(Alumno == NULL){
        return 0;

    }
    printf("\nMateria: ");
    scanf("%d", &materia);
    materia = materia - 1;
    for(int i=0;i<5;i++){
        printf("\nCalificacion %d: ",i+1);
        scanf("%f",&Alumno->PtrAl->calif[materia][i]);
    }

    printf("\nMateria modificada");
    return 0;

}

int mantenimiento(void){
    printf("\n| EN MANTENIMIENTO CERRADO POR REPARACIÓN |\n");

    return 0;

}

struct Persona *buscarAlumno(struct Persona *Ptr){
    char matricula[10];
    printf("\nIngrese la matricula: ");
    scanf("%s", matricula);

    while(Ptr != NULL){
        int dato = 1;
        for(int i=0; i<10; i++){
            if(matricula[i] != Ptr->PtrAl->matricula[i]){
                dato = 0;
            }
        }
        if(dato == 1){
            return Ptr;
        }

        Ptr = Ptr->PtrSig;
    }

    printf("\nAlumno no encontrado");
    return NULL;

}
