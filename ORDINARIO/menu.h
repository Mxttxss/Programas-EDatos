
#ifndef MENU_H
#define MENU_H

#include <stdio.h>

int menuPrincipal(void){

    int op; 
    printf("\nMENÚ");
    printf("\n1 - Altas");
    printf("\n2 - Bajas");
    printf("\n3 - Mostrar"); 
    printf("\n4 - Funciones especiales"); 
    printf("\n5 - Salir");
    printf("\nSeleccione una opción: ");
    scanf("%d", &op); 
    
    return op; 
}

int menuAltas(void){

    int op;
    printf("\nALTAS");
    printf("\n1 - Registrar a una persona");
    printf("\n2 - Registrar a varias personas"); 
    printf("\n3 - Salir"); 
    printf("\nSeleccione una opción: "); 
    scanf("%d", &op);

    return op; 
}

int menuCarreras(void){

    int op;
    printf("Carrera: "); 
    printf("\n1 - Licenciatura en Ciencias Ambientales"); 
    printf("\n2 - Ingeniería Forestal"); 
    printf("\n3 - Ingeniería en Desarrollo de Software");
    printf("\n4 - Licenciatura en Biología"); 
    printf("\n5 - Licenciatura en Administración Turística");
    printf("\nSeleccione su carrera: ");
    scanf("%d", &op);

    return op; 
}

int menuBajas(void){

    int op;
    printf("\nBAJAS");
    printf("\n1 - Eliminar una persona");
    printf("\n2 - Eliminar varias personas");
    printf("\n3 - Eliminar todas");
    printf("\n4 - Salir");
    printf("\nSeleccione una opcion: ");
    scanf("%d",&op);

    return op;
}

int menuMostrar(void){

    int op;
    printf("\nMOSTRAR");
    printf("\n1 - Todas las persona");
    printf("\n2 - Carrera");
    printf("\n3 - Semestre");
    printf("\n4 - Carrera y semestre");
    printf("\n5 - Nombre");
    printf("\n6 - Matricula");
    printf("\n7 - Salir");
    printf("\nSeleccione una opcion: ");
    scanf("%d",&op);

    return op;
}

int menuFunciones(void){

    int op; 
    printf("FUNCIONES ESPECIALES");
    printf("\n1 - Modificar");
    printf("\n2 - Calificaciones"); 
    printf("\n3 - Salir"); 

    return op;
}
    
#endif
