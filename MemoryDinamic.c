
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu(){
    int Opcion;
    
    printf("\nMENÚ\n");
    printf("1 - Ingresar números aleatorios");
    printf("2 - Mostrar números aleatorios");
    printf("3 - Salir");    
    scanf("%d", &Opcion);
}

int main(void){
    int Opcion;
    int *Ptr;
    Ptr = (int*) malloc(sizeof(int)*5); 
    
    srand(time(NULL));
    
    do{ 
        Opcion = menu();
        switch(Opcion)
            case 1:
                for(int i=0; i<5; i++){
                    *(Ptr+i) = rand() % 5+5; 
                }
                break;
            case 2:
                for(int i=0; i<5, i++){
                    printf("%d", *(Ptr+i));
                }
                break;
            case 3:
                printf("Saliendo...");
                break;
        }
    }while(Opcion != 3); 

    free(Ptr);
    
    return 0;
}