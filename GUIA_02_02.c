#include<stdio.h>

/*1.2 Calcular promedio
Implementa una funcion en C llamada calcularpromedio que reciba un arreglo
de numeros enteros y su longitud como parametros, y devuelva el promedio de
los elementos del arreglo. Luego, escribe un programa que solicite al usuario ingresar
los elementos de un arreglo, utilice esta funcion para calcular el promedio,
y finalmente imprima el resultado.*/




void calcularpromedio(int *vector[],int *len){

    int total;

    for(int i=0;i>len;i++){
        total=total+vector[i];

    }
    float promedio=total;
    promedio=promedio/len;


}

int main(void){

    int len,num,total=0,promedio;

    int vector[len];

    printf("Ingresar cantidad de numeros a promediar:\n");
    scanf("%d",&len);
    getchar();


    for(int i=0;i<len;i++){

        printf("Ingresar %d numeros seguidos de un enter:\n",len);
        scanf("%d",&num);
        getchar();

        vector[i]= num;
    }

    printf("Numeros ingresados:\n");
    for(int i=0;i<len;i++){
        printf("%d ",vector[i]);
    }
    void calcularpromedio(vector[],len);

    return 0;
}
