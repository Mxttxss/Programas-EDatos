
#ifndef STRUCTS_H
#define STRUCTS_H

struct Persona{
    char *nombre;
    int edad;
    char genero; 
    char fecha[12];
    struct Alumno *PtrAl; 
    struct Persona *PtrSig; 
};

struct Alumno{
    char matricula[10];
    int carrera;
    int semestre;
    char correo[13]; 
    float calif[5][5]; 
}; 

#endif
