
#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int n;
    struct Nodo *ant;
    struct Nodo *sig;
};

struct Nodo *inicio = NULL;
struct Nodo *nuevo = NULL;
struct Nodo *ultimo = NULL;
struct Nodo *Ptraux = NULL;

void reservarMemoria() {
    nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));
    if(nuevo == NULL) {
        printf("Errorcito :(\n");
    }
}

int main() {
    int opcion;
    int dato;

    do {
        printf("\nMENÚ\n");
        printf("1 - Insertar\n");
        printf("2 - Eliminar\n");
        printf("3 - Mostrar\n");
        printf("4 - Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                reservarMemoria();
                if(nuevo == NULL) {
                    break;
                }
                printf("Ingrese el valor: ");
                scanf("%d", &dato);

                nuevo -> n = dato;

                if(inicio == NULL) {
                    nuevo -> sig = nuevo;
                    nuevo -> ant = nuevo;
                    inicio = nuevo;
                }
                else {
                    ultimo = inicio -> ant;
                    nuevo -> sig = inicio;
                    nuevo -> ant = ultimo;
                    ultimo -> sig = nuevo;
                    inicio -> ant = nuevo;
                }
                 break;

            case 2:
                if(inicio == NULL) {
                    printf("No hay \n");
                    break;
                }
                
                do {
                    if(Ptraux -> n == valor) {
                        if(Ptraux -> sig == Ptraux) {
                            inicio = NULL;
                        }
                        else {
                            Ptraux -> ant -> sig = Ptraux -> sig;
                            Ptraux -> sig -> ant = Ptraux -> ant;
                            if(Ptraux == inicio) {
                                inicio = Ptraux -> sig;
                            }
                        }
                        free(Ptraux);
                        break;
                    }
                    Ptraux = Ptraux -> sig;
                } while(Ptraux != inicio);
            }
              break;

            case 3:
                if(inicio == NULL) {
                    printf("No hay nd en la lista ):\n");
                    break;
                }
                Ptraux = inicio;
                printf("\nDATOS\n");
                do {
                    printf("%d ", Ptraux -> n);
                    Ptraux = Ptraux -> sig;

                } while(Ptraux != inicio);
                break;

            case 4:
                if(inicio == NULL) {
                    printf("No hay nothing\n");
                }
                else {
                    Ptraux = inicio -> sig;
                    while(Ptraux != inicio) {
                        struct Nodo *temp;
                        temp = Ptraux;
                        Ptraux = Ptraux -> sig;
                        free(temp);
                    }
                    free(inicio);
                    inicio = NULL;

                }
                break;

            default:
                printf("Opcion inválida de chava bienestar\n");
        }

    } while(opcion != 4);

    return 0;
}
