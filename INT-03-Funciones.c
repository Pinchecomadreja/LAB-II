#include<stdio.h>
#include<colordlg.h>

#define PI 3.14159


//Area y Perimetro Cuadrado
void calculocuadrado(int *lado){

    int area, perimetro;

    perimetro= (*lado)*4;
    area= (*lado)*(*lado);//error al usar simbolos default *(sera tema de punteros??)

    printf("\033[0;32m");//color green
    printf("perimetro:%d\narea:%d\n",perimetro,area);
    printf("\033[0m");//color default
}


//Area y Perimetro rectangulo
void calculorectangulo(int *lado,int *alto){

    int area, perimetro;

    area=(*lado)*(*alto);
    perimetro=(*lado+*alto)*2;

    printf("\033[0;32m");//color green
    printf("perimetro:%d\narea:%d\n",perimetro,area);
    printf("\033[0m");//color default
}


//Area y Perimetro circulo
void calculocirculo(int *radio){

    int area, perimetro;

    area=PI*(*radio)*(*radio);
    perimetro=(*radio)*PI*2;

    printf("\033[0;32m");//color green
    printf("perimetro:%d\narea:%d\n",perimetro,area);
    printf("\033[0m");//color default
}


int main(void){
    int option;
    int lado,alto,radio;

    do{
        printf("Opciones de calculo:\n");

        printf("1)Calcular Cuadrado (Area y Perimetro):\n");

        printf("2)Calcular Rectangulo (Area y Perimetro):\n");

        printf("3)Calcular Circulo:\n");

        printf("4)Salir\n");

        scanf("%d",&option);
        getchar();

        switch(option){
            case 1:
                printf("lado:\n");
                scanf("%d",&lado);

                calculocuadrado(&lado);
                break;
            case 2:
                printf("lado:\n");
                scanf("%d",&lado);

                printf("alto:\n");
                scanf("%d",&alto);

                calculorectangulo(&lado,&alto);
                break;
            case 3:
                printf("radio:\n\n");
                scanf("%d",&radio);

                calculocirculo(&radio);
                break;
            case 4:
                printf("Saliendo....\n\n");
                break;
            default:
                printf("\033[0;31m");//color red
                printf("Opcion no valida!!\n\n");
                printf("\033[0m");//color default
        }

    }while(option!=4);

    return 0;
}
