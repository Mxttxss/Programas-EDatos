
#include <stdio.h>

int menuCarreras(void);

int menuCarreas(void){
  int opcion; 
  printf("\nCARRERAS;\n"); 
  
  printf("1 - Licenciatura en Ciencias Ambientales");
  printf("2 - Ingeniería Forestal"); 
  printf("3 - Ingeniería en Desarrollo de Software");
  printf("4 - Licenciatura en Biología");
  printf("5 - Licenciatura en Administración Turistíca");
  printf("Seleccione su carrera: ");
  scanf("%d", &opcion); 

  return opcion; 
  
}
