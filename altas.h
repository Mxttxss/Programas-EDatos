
#include <stdio.h>
#include <stdlib.h>

struct Persona *PtrP;
struct Alumno *PtrA;

int altas(struct Persona **Ptr){
    struct Persona *PtrAux;

    struct Persona nuevaPersona(){
        struct Persona *P;
        P = (struct Persona *)malloc(sizeof(struct Persona));
        return P;
    }

    struct Alumno nuevoAlumno(){
        struct Alumno *A;
        A = (struct Alumno *)malloc(sizeof(struct Alumno)); 
        return A;
    }

printf("\nPERSONA\n"); 
printf("Nombre: ");
scanf("%s", P -> nombre); 
printf("Edad: ");
scanf("%d", &P -> edad); +
printf("Género: ");
scanf("%c", &P -> genero);
printf("Fecha de nacimiento: [DD/MM/AAAA] ");
scanf("%s", P -> fecha); 

printf("\nALUMNO\n");
printf("Matricula: "); 
scanf("%s", A -> matricula);
printf("Carrera: ");
scanf("%d", &A -> carrera); 
printf("Correo: "); 

for(int i=0; i<5; i++){
    for(int j=0; j<5; j++{
        printf("Calificaciones [%d][%d]: ", i, j); 
        scanf("%f", &A -> calif[i][j]); 
    }
}
    

}
