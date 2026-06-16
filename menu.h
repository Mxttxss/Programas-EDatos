
#include <stdio.h>

int menuPrincipal(void); 

int menuPrincipal(void){
    int opcion; 
    printf("\nMENÚ\n");
    printf("\n1 - Ingresar datos de la persona");
    printf("\n2 - Ingresar datos del alumno");
    printf("\n3 - Buscar persona"); 
    printf("\n4 - Buscar alumno"); 
    printf("\n5 - Salir");
    printf("\nSeleccione una opción: ");
    scanf("%d", &opcion); 
    
    return opcion; 
}
