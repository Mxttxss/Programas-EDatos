
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
    printf("\nFUNCIONES ESPECIALES");
    printf("\n1 - Modificar");
    printf("\n2 - Calificaciones"); 
    printf("\n3 - Salir"); 
    printf("\nSeleccione una opción: ");
    scanf("%d", &op); 
    return op;
}

int menuModificar(void){

    int op;
    printf("\nMODIFICAR");
    printf("\n1 - Calificaciones del alumno");
    printf("\n2 - Datos");
    printf("\n3 - Salir");
    printf("\nSeleccione una opción: ");
    scanf("%d",&op);

    return op;
}

int menuCalif(void){

    int op;
    printf("\nCALIFICACIONES");
    printf("\n1 - Parcial");
    printf("\n2 - Materia");
    printf("\nSeleccione una opción: ");
    scanf("%d",&op);

    return op;
}

int menuDatos(void){

    int op;
    printf("\nDATOS");
    printf("\n1 - Persona");
    printf("\n2 - Alumno");
    printf("\nSeleccione una opción: ");
    scanf("%d",&op);

    return op;
}

int menuCalificaciones(void){

    int op;
    printf("\nCALIFICACIONES");
    printf("\n1 - Semestre");
    printf("\n2 - Carrera");
    printf("\nSeleccione una opción: ");
    scanf("%d",&op);

    return op;
}

int menuSemestre(void){

    int op;
    printf("\nSEMESTRE");
    printf("\n1 - Materia");
    printf("\n2 - Parcial");
    printf("\nSeleccione opcion: ");
    scanf("%d",&op);

    return op;
}

int menuCarrera(void){

    int op;
    printf("\nCARRERA");
    printf("\n1 - Sin adeudos");
    printf("\n2 - Maximo 3 adeudos");
    printf("\n3 - Mas de 4 adeudos");
    printf("\nSeleccione una opcion: ");
    scanf("%d",&op);

    return op;
}

int menuSalir(void){
    int op; 
    printf("\nDesea salir?");
    printf("\n1 - Si"); 
    printf("\n2 - No"); 
    printf("\nSeleccione una opción: "); 
    scanf("%d", &op); 

    return op; 
}

#endif
