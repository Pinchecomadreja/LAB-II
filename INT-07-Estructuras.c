#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct persona{
    char nombre[20];
    int edad;
    float altura;

}personas;

    /*VECTOR DE CON STRUCS FORMA ABSTRACTA
        vector[[struct[nombre,edad,altura]]
    /

/*
ingresar dentro de estructura las categorias correspondientes
for(int i=0;i<1;i++){

    scanf("%s",persona[i].nombre);
    scanf("%d",&persona[i].edad);
    scanf("%f",&persona[i].edad);


}
*/

int main(void){

    personas profesores[]={{"Pablo",23,1.8},{"Rodrigo",20,1.5}};

    for(int i=0;i<1;i++){

        printf("Nombre = %s\n",profesores[i].nombre);
        printf("Edad = %d\n",profesores[i].edad);
        printf("Altura = %.2f\n",profesores[i].altura);


    }


    return 0;
}


/*
¿ Cómo haria para ingresar en la estructura n profesores?
Luego pidale al usuario que seleccione un valor entre 0 y n para imprimir los datos de un profesor.
Haga todo solamente en la funcion main.
*/


