#ifndef STRUCTS_H
#define STRUCTS_H

struct Persona{
    char *nombre;
    int edad;
    char genero; 
    char fecha[8];
    struct Alumno *PtrAl; 
    struct Persona *PtrSig; 
};

struct Alumno{
    char matricula[10];
    int carrera;
    int semestre;
    char correo[13]; 
    float calif[5][5]; 
}; 

#endif

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "altas.h"

int main(){
    int opcion;
    struct Persona *Ptr;

    do{
        opcion = menuPrincipal();
        switch (opcion){
        case 1:
            altas(&Ptr);
            break;
        case 2:
            break; 
        case 3: 
            break; 
        case 4: 
            break; 
        default:
            break;
        }
    }while(opcion!=5);

    return 0;
}
