#include<stdio.h>
/*1.5 Determinaci´on del tipo de tri´angulo
Escribe un programa que solicite al usuario ingresar las longitudes de los tres
lados de un tri´angulo y determine si es equil´atero, is´osceles o escaleno.*/

int main_01(){
    //escaleno !=3
    //isoseles=2
    // equilatero=3
    int a,b,c;

    printf("ingrese el primer lado de su triangulo:\n");
    scanf("%f", &a);
    printf("ingrese el segundo lado de su triangulo:\n");
    scanf("%f", &b);
    printf("ingrese el tercer lado de su triangulo:\n");
    scanf("%f", &c);

    if(a!=b && a!=c && b!=c){
            printf("su triangulo es escaleno");

    }else if(a!=b && a==c && b!=c || a!=b && a!=c && b==c || a==b && a!=c && b!=c){
            printf("su triangulo es isoseles");
    }

    else{
        printf("su triangulo es equilatero");


    }



    return 0;
}



int main_02(void){

    int num,cant,suma=0,mult=1;
    int *p;
    p=&num;

    printf("ingresar cantidad de numeros a procesar:\n\n");
    scanf("%d",&cant);

    for(int i=1;i<cant+1;i++){

        printf("ingresar numero %d:\n",i);
        scanf("%d",p);

        suma=num+suma;
        mult=num*mult;


    }
    printf("suma: %d\n",suma);
    printf("multiplicacion: %d\n",mult);

    return 2;
}


int main(){

    main_02();

}
