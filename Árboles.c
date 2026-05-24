
#include <stdio.h>
#include <stdlib.h>

struct arbol{
    int dato;
    struct arbol *Izq, *Der;
};

struct arbol* crearNodo(){
    struct arbol *rama;
    rama = (struct arbol*)malloc(sizeof(struct arbol));
    if(rama == NULL){
        return NULL;
    }
    printf("Ingrese el dato: ");
    scanf("%d", &rama -> dato);
    return rama;
}


int main(){
    struct arbol *raiz;
    struct arbol *Ptraux;
    struct arbol *Ptrtemp;
    int opcion;

    do{
        printf("\nMENÚ\n");
        printf("1 - Ingresar\n");
        printf("2 - Mostrar\n");
        printf("3 - Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion){

            case 1:
                Ptrtemp = crearNodo();
                if(Ptrtemp == NULL){
                    printf("No se pudo reservar memory :(\n");
                }
                else if(raiz == NULL){
                    raiz = Ptrtemp;
                }
                else{
                    Ptraux = raiz;
                    while(1){
                        if(Ptrtemp -> dato < Ptraux -> dato){
                            if(Ptraux -> Izq == NULL){
                                Ptraux -> Izq = Ptrtemp;
                                break;
                            }
                            else{
                                Ptraux = Ptraux -> Izq;
                            }
                        }
                        else if(Ptrtemp -> dato > Ptraux -> dato){
                            if(Ptraux -> Der == NULL){
                                Ptraux -> Der = Ptrtemp;
                                break;
                            }
                            else{
                                Ptraux = Ptraux -> Der;
                            }
                        }
                    }
                }
            break;

            case 2:
                if(raiz == NULL){
                    printf("No hay nd en el arboluchis ):");
                }else{
                }
            break;

            case 3:
            break;

            default:
                printf("\nOpción inválida :(\n");
            break;
        }

    }while(opcion != 3);
    return 0;
}
