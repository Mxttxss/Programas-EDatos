
#ifndef STRUCTS_H
#define STRUCTS_H

struct Persona{
    char *nombre;
    int edad;
    char genero; 
    char fecha[12];
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
#include <time.h>
#include "menu.h"
#include "altas.h"
#include "bajas.h"

int main(void){
    srand(time(NULL));
    int opcion;
    struct Persona *Ptr = NULL;

    do{
        opcion = menuPrincipal();
        switch (opcion){
        case 1:
            switch(menuAltas()){
                case 1:
                altas(&Ptr);
                    break;
                case 2:
                altasPersonas(&Ptr);
                    break;
                }
            break;
        case 2:
            switch(menuBajas()){
                case 1:
                    //bajaPersona(&Ptr);
                    break;
                case 2:
                    //bajaPersonas(&Ptr);
                    break;
                case 3:
                    //bajaTodos(&Ptr);
                    break; 
                }
            break; 
        case 3: 
            break; 
        case 4: 
            break; 
        case 5:
            break; 
        default:
            break;
        }
    }while(opcion!=5);

    return 0;
}
