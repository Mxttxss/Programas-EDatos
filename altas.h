
#ifndef STRUCT_H
#define STRUCT_H

#include <stdio.h>
#include <stdlib.h>

struct Persona *nuevaPersona();
struct Alumno *nuevoAlumno();

int altas(struct Persona **Ptr);

int altas(struct Persona **Ptr){
    struct Persona *P = NULL; 
    struct Alumno *A = NULL; 

    int b = 1; 

    P = nuevaPersona();
    if(P == NULL){
        printf("Error, no se pudo crear :(");
        b = 0; 
    }else{
        A = nuevoAlumno();
        if(A == NULL){
            b = 0;
            free(P);    
    }else{
        P->PtrAl = A; 
        P->PtrSig = *Ptr;
        *Ptr = P; 
        }
    
    return 0;
}

struct Persona *nuevaPersona(){
    struct Persona *P; 

        P = (struct Persona *)malloc(sizeof(struct Persona));
        if (P == NULL){
            return NULL; 
        }

        printf("\nPERSONA\n"); 
        printf("Nombre: ");
        scanf("%s", P -> nombre); 
        printf("Edad: ");
        scanf("%d", &P -> edad); 
        printf("Género: ");
        scanf("%c", &P -> genero);
        printf("Fecha de nacimiento: [DD/MM/AAAA] ");
        scanf("%s", P -> fecha); 

        return P;
    } 

struct Alumno nuevoAlumno(){
    struct Alumno *A;

        A = (struct Alumno *)malloc(sizeof(struct Alumno)); 
        if (A == NULL)
            return NULL; 

        printf("\nALUMNO\n");
        printf("Matricula: "); 
        scanf("%s", A -> matricula);
        printf("Carrera: ");
        scanf("%d", &A -> carrera); 
        printf("Correo: "); 
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                printf("Calificaciones [%d][%d]: ", i, j); 
                scanf("%f", &A -> calif[i][j]); 
            }
        }

}
}

#endif
