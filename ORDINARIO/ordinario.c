
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
                    bajaPersona(&Ptr);
                    break;
                case 2:
                    bajaPersonas(&Ptr);
                    break;
                case 3:
                    bajaTodos(&Ptr);
                    break; 
                }
            break; 
        case 3: 
            switch(menuMostrar()){
                case 1:
                    mostrarTodos(Ptr);
                    break;
                case 2:
                    mostrarCarrera(Ptr);
                    break;
                case 3:
                    mostrarSemestre(Ptr);
                    break;
                case 4:
                    mostrarCarrerasemestre(Ptr);
                    break; 
                case 5:
                    mostrarNombre(Ptr);
                    break;
                case 6: 
                    mostrarMatricula(Ptr);
                    break; 
                }
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
