
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"
#include "menu.h"

void mostrar(struct Persona *PtrAux){
    printf("\nPERSONA");
    printf("\nNombre: %s", PtrAux->nombre);
    printf("\nEdad: %d", PtrAux->edad);
    printf("\nGenero: %c", PtrAux->genero);
    printf("\nFecha: %s", PtrAux->fecha);


    printf("\nALUMNO");
    printf("\nMatricula: %s", PtrAux->PtrAl->matricula);
    printf("\nCarrera: %d", PtrAux->PtrAl->carrera);
    printf("\nSemestre: %d", PtrAux->PtrAl->semestre);
    printf("\nCorreo: %s@unsij.edu.mx", PtrAux->PtrAl->correo);
}

int mostrarTodos(struct Persona *Ptr){
    while(Ptr!=NULL){
        mostrar(Ptr);
        Ptr=Ptr->PtrSig;
    }
    return 0;
}

int mostrarCarrera(struct Persona *Ptr){
    int carrera;
    carrera = menuCarreras();
    while(Ptr!=NULL){
        if(Ptr->PtrAl->carrera == carrera){
            mostrar(Ptr);
        }
        Ptr=Ptr->PtrSig;
    }
    return 0;
}

int mostrarSemestre(struct Persona *Ptr){
    int semestre;
    printf("\nSemestre: ");
    scanf("%d",&semestre);
    while(Ptr!=NULL){
        if(Ptr->PtrAl->semestre == semestre){
            mostrar(Ptr);
        }
        Ptr=Ptr->PtrSig;
    }

    return 0;
}

int mostrarCarrerasemestre(struct Persona *Ptr){
    int carrera;
    int semestre;
    carrera = menuCarreras();

    printf("\nSemestre: ");
    scanf("%d",&semestre);
    while(Ptr!=NULL){
        if(
            Ptr->PtrAl->carrera == carrera && Ptr->PtrAl->semestre == semestre){
            mostrar(Ptr);
        }
        Ptr=Ptr->PtrSig;
    }

    return 0;
}

int mostrarNombre(struct Persona *Ptr){
    char nombre[50];
    int nom;
    printf("\nNombre: ");
    scanf(" ");
    fgets(nombre,50,stdin);

    while(Ptr != NULL){
        nom = 1;
        for(int i=0; i<50; i++){
            if(nombre[i] != Ptr->nombre[i]){
                nom = 0;
            }
        }
        if(nom == 1){
            mostrarTodos(Ptr);
        }
        Ptr = Ptr->PtrSig;
    }

    return 0;
}

int mostrarMatricula(struct Persona *Ptr){
    char matricula[10];
    int dato;
    printf("\nMatricula: ");
    scanf("%s", matricula);

    while(Ptr != NULL){
        dato = 1;
        for(int i=0; i<10; i++){
            if(matricula[i] != Ptr->PtrAl->matricula[i]){
                dato = 0;
            }
        }
        if(dato == 1){
            mostrarTodos(Ptr);
        }

        Ptr = Ptr->PtrSig;
    }

    return 0;
}
