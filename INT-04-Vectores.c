#include<stdio.h>

//----------------FUNCIONES------------------
void sumatoria(int *vector, int len){

    int suma=0;
    for(int i=0;i<len;i++){

        suma+=vector[i];
    }
    printf("\033[0;32m");//color green
    printf("\nSumatoria Vectorial: %d\n",suma);
    printf("\033[0m");//color default
}
void max(int *vector, int len){

    int top=vector[0];

    for(int i=1;i<len;i++){

        if(top<vector[i]){
            top=vector[i];
        }

    }
    printf("\033[0;32m");//color green
    printf("\nNumero mayor: %d",top);
    printf("\033[0m");//color default

}
void min(int *vector, int len){

    int bottom=vector[0];

    for(int i=1;i<len;i++){

       if(bottom>vector[i]){

            bottom=vector[i];
        }
    }
    printf("\033[0;32m");//color green
    printf("\nNumero menor: %d",bottom);
    printf("\033[0m");//color default
}
void promedio(int *vector,int len){

    int subtotal=0;
    int total=0;

    for(int i=0;i<len;i++){
        subtotal+=vector[i];

    }
    total= subtotal/len;

    printf("\033[0;32m");//color green
    printf("\nPromedio Vectorial: %d",total);
    printf("\033[0m");//color default
}
//-------------------------------------------
//----------------CODIGO---------------------
int main(void){

    int len,value;
    int option=0;

    printf("----------------VECTORES----------------------\n\n");

    do{
        printf("Ingresar cantidad de argumentos para el vector:\n");
        scanf("%d",&len);
        if(len>=10){
            printf("\033[0;31m");//color red
            printf("\nValor por encima del limite.\nIntente de nuevo.\n\n");
            printf("\033[0m");//color default
        }

    }while(len>=10);
    // pide la cantidad de argumentos del vector


    int vector[len];

    // Pide y asigna un numero a cada posicion del vector
    for(int i=0;i<len;i++){

        printf("Ingresar el numero para posicion [%d]:\n",i+1);
        scanf("%d",&value);

        vector[i]= value;


    }
    printf("Numeros Vector:\n");

    //Imprime cada numero en vector
    for(int j=0;j<len;j++){

        printf("[%d]",vector[j]);

    }

    do{
        printf("\n\nOpciones de calculo:\n");

        printf("1)Calcular Max:\n");

        printf("2)Calcular Min:\n");

        printf("3)Calcular Sumatoria:\n");

        printf("4)Calcular Promedio:\n");

        printf("5)Salir\n");

        scanf("%d",&option);
        getchar();

        switch(option){
            case 1:
                max(&vector,len);
                break;
            case 2:
                min(&vector,len);
                break;
            case 3:
                sumatoria(&vector,len);
                break;
            case 4:
                promedio(&vector,len);
                break;
            case 5:
                printf("----------------------------------------------\n\n");
                break;
            default:
                printf("\033[0;31m");//color red
                printf("Opcion no valida!!\n\n");
                printf("\033[0m");//color default
        }

    }while(option!=5);

    return 0;
}
