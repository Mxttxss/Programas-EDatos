
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "menu.h"
#include "altas.h"
#include "structs.h"
#include "bajas.h"
#include "mostrar.h"
#include "funciones.h"

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
            switch(menuFunciones()){
                case 1:
                    switch(menuModificar()){
                        case 1:
                            switch(menuCalif()){
                                case 1:
                                modificarParcial(buscarAlumno(Ptr));
                                    break;
                                case 2:
                                modificarMateria(buscarAlumno(Ptr));
                                    break;
                            }
                            break;
                        case 2:
                            switch(menuDatos()){
                                case 1:
                                modificarPersona(buscarAlumno(Ptr));
                                    break;
                                case 2:
                                modificarAlumno(buscarAlumno(Ptr));
                                    break;
                                }
                            break;
                            }
                        break;
                case 2: 
                    switch(menuCalificaciones()){
                        case 1:
                            switch(menuSemestre()){
                                case 1:
                                mantenimiento();
                                    break;
                                case 2:
                                mantenimiento();
                                    break;
                                }
                            break;
                        case 2:
                            switch(menuCarrera()){
                                case 1:
                                mantenimiento();                                   
                                    break;
                                case 2:
                                mantenimiento();
                                    break;
                                case 3:
                                mantenimiento();
                            break;
                            }
                        break;
                        }
                    break;
                case 3:
                    break;
                }
            break;
        case 5:
            switch(menuSalir()){
                case 1:
                bajaTodos(&Ptr);
                    printf("Saliendo..."); 
                    break;
                }
            break; 
        default:
            printf("\nTu opción no fue inválida, ni modo\n"); 
            break;
        }
    }while(opcion!=5);

    return 0;
}

 