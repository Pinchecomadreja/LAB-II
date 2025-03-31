#include<stdio.h>

/*
1.3 Contar la Cantidad de Elementos Pares en un vector
Escribe un programa en C que cuente y muestre la cantidad de elementos pares
en un array de enteros.
*/
void num_par(){

    int par;
    int numeros,arg=5;
    int vector[arg];

    for(int i=0;i<arg;i++){

        printf("Ingresar elemento [%d]:\n",i+1);
        scanf("%d",&numeros);

        vector[i]=numeros;
    }
    for(int i=0;i<arg;i++){
        if(vector[i]%2==0){
            printf("elemento par[%d]= %d\n",i,vector[i]);
            par++;
        }

    }
    printf("\nCantidad de elementos pares: %d\n",par);
}


/*
1.4 Buscar un Elemento en un vector y Mostrar su Posicion
Escribe un programa en C que busque un elemento especıfico en un array de
enteros y muestre su posicion en el array.
*/

void buscar(){

    int len=3,vector[len];
    int elemento,numeros;


    for(int i=0;i<len;i++){

        printf("Ingresar elemento [%d]:\n",i+1);
        scanf("%d",&numeros);

        vector[i]=numeros;
    }

    printf("Elemento a buscar:\n",elemento);
    scanf("%d",&elemento);

    for(int i=0;i<len;i++){
        if(){

        }
        else if(vector[i]==elemento){
            printf("Ubicacion en array[%d]\n",i);
        }
    }


}


int main(){

    //num_par();//1.3
    buscar();//1.4

    return 0;
}

