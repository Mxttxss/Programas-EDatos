
#include <stdio.h>

void altas(struct Persona **);

void altas(struct Persona **Ptr){
    struct Persona *PtrAux;

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void altas(struct Persona **ptr)
{
    struct Persona *nuevo;
    struct Persona *aux;

    nuevo = (struct Persona *)malloc(sizeof(struct Persona));

    if(nuevo == NULL)
    {
        printf("Error al reservar memoria\n");
        return;
    }

    nuevo->nombre = (char *)malloc(50*sizeof(char));

    if(nuevo->nombre == NULL)
    {
        printf("Error al reservar memoria\n");
        free(nuevo);
        return;
    }

    printf("\nIngrese nombre: ");
    scanf(" %[^\n]", nuevo->nombre);

    printf("Ingrese edad: ");
    scanf("%d", &nuevo->edad);

    printf("Ingrese genero (M/F): ");
    scanf(" %c", &nuevo->genero);

    printf("Ingrese fecha de nacimiento: ");
    scanf("%s", nuevo->fecha);

    nuevo->ptrAl = NULL;
    nuevo->ptrSig = NULL;

    if(*ptr == NULL)
    {
        *ptr = nuevo;
    }
    else
    {
        aux = *ptr;

        while(aux->ptrSig != NULL)
        {
            aux = aux->ptrSig;
        }

        aux->ptrSig = nuevo;
    }

    printf("\nPersona registrada correctamente.\n");
}
