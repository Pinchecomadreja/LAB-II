#include<stdio.h>


/*1.1 Encontrar menor
Escribe una funcion en C llamada encontrarmenor que tome tres numeros enteros
como entrada y devuelva el menor de los tres como resultado. Luego,
escribe un programa que solicite tres numeros al usuario, utilice esta funcion
para encontrar el menor, y finalmente imprima el resultado.*/


void encontrarmenor(int*a,int*b,int*c){

    int menor;


    //A<<
    if(a<b && a<c){
        menor=*a;
        printf("menor:%d\n",menor);
    }
    //B<<
    else if(b<a && b<c){
        menor=*b;
        printf("menor:%d\n",menor);
    }
    //C<<
    else if(c<a && c<b){
        menor=*c;
        printf("menor:%d\n",menor);
    }
    else{
        printf("BROKE!!\n");

    }
}

int main(void){

    int a,b,c;

    printf("enter 3 numbers:\n");

    printf("enter number 1:\n");
    scanf("%d",&a);

    printf("enter number 2:\n");
    scanf("%d",&b);

    printf("enter number 3:\n");
    scanf("%d",&c);

    encontrarmenor(&a,&b,&c);


    return 0;
}



