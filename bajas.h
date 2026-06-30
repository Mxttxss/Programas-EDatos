
#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "structs.h"

int bajaPersona(struct Persona **Ptr);
int bajaPersonas(struct Persona **Ptr);
int bajaTodos(struct Persona **Ptr);

int bajaPersona(struct Persona **Ptr){
    struct Persona *PtrAux;
    if(*Ptr == NULL){
        printf("No hay personas\n");
        return 0;
    }

    PtrAux = *Ptr;
    *Ptr = PtrAux->PtrSig;
    free(PtrAux->nombre);
    free(PtrAux->PtrAl);
    free(PtrAux);
    printf("Se elimino a la persona\n");

    return 0;
}

int bajaPersonas(struct Persona **Ptr){
    int op = 1;
    if(*Ptr == NULL){
        printf("No hay personas\n");
        return 0;
    }

    while(op == 1){
        bajaPersona(Ptr);
        if(*Ptr == NULL){
            break;
        }
        printf("\nDesea eliminar otra persona?");
        printf("\n1 - Si");
        printf("\n2 - No");
        printf("\nSeleccione una opción: ");
        scanf("%d", &op);
    }

    return 0;
}

int bajaTodos(struct Persona **Ptr){
    if(*Ptr == NULL){
        printf("No hay personas\n");
        return 0;
    }
    while(*Ptr != NULL){
        bajaPersona(Ptr);
    }
    printf("Todas las personas fueron eliminadas\n");

    return 0;
}
