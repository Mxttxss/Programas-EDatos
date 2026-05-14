
#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int n;
    struct Nodo *ant;
    struct Nodo *sig;
};

struct Nodo *inicio = NULL;

void insertar(int valor) {
    struct Nodo *nuevo;
    nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));

    if(nuevo == NULL) {
        printf("Errorcito de memory\n");
        return;
    }

    nuevo -> n = valor;

    if(inicio == NULL) {
        nuevo -> sig = nuevo;
        nuevo -> ant = nuevo;
        inicio = nuevo;
    }
    else {
        struct Nodo *ultimo;
       
        ultimo = inicio -> ant;
        nuevo -> sig = inicio;
        nuevo -> ant = ultimo;
        ultimo -> sig = nuevo;
        inicio -> ant = nuevo;
    }
}

void eliminar(int valor) {
    if(inicio == NULL) {
        printf("No nhay nothing en the list\n");
        return;
    }
    struct Nodo *Ptraux;
    Ptraux = inicio;

    do {
        if(Ptraux -> n == valor) {
            if(Ptraux -> sig == Ptraux) {
                inicio = NULL;
            }
            else {
                Ptraux -> ant -> sig = Ptraux -> sig;
                Ptraux  ->sig -> ant = Ptraux -> ant;
                if(Ptraux == inicio) {
                    inicio = Ptraux -> sig;
                }
            }
            free(Ptraux);
            return;
        }
        Ptraux = Ptraux -> sig;
    } while(Ptraux != inicio);
}

void mostrar() {

    if(inicio == NULL) {
        printf("No hay nd en la lista :(\n");
        return;
    }
    struct Nodo *Ptraux;
    Ptraux = inicio;

    printf("\nDATOS\n");
    do {
        printf("%d ", Ptraux -> n);
    } while(Ptraux != inicio);
}

int main() {

    int opcion;
    int dato;

    do {
        printf("\nMENÚ\n");
        printf("1 - Insertar\n");
        printf("2 - Eliminar\n");
        printf("3 - Mostrar\n");
        printf("4 -Salir\n");
        printf("Eliga una pcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Ingrese un dato: ");
                scanf("%d", &dato);
                insertar(dato);
                break;

            case 2:
                printf("Ingrese el valor a eliminar: ");
                scanf("%d", &dato);
                eliminar(dato);
                break;

            case 3:
                mostrar();
                break;

            case 4:
                printf("Finish\n");
                break;

            default:
                printf("Opcion inválida de chava bienestar\n");
        }

    } while(opcion != 4);

    return 0;
}
