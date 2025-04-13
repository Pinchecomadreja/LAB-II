#include<stdio.h>
#include<stdlib.h>

/*
1.1 Asignacion dinamica de un solo entero
Escribe un programa que solicite al usuario ingresar un numero entero. Luego,
asigna memoria dinamica para este entero y almacena el valor ingresado. Finalmente,
imprime el valor almacenado y libera la memoria asignada

*/

void doble_enter(void){
    for(int i=0;i<2;i++){
        printf("\n");
    }
}

int main_1_1(){

    int *p;
    p =(int*)malloc(5*sizeof(int));

    printf("Ingresar numeros:\n");
    //paso la direccion del vector
    scanf("%d",&p[0]);

    //scanf("%d",&p[1]); paso la posicion del vector
    //scanf("%d",p); paso el puntero
    //scanf("%d",p+1); paso el el puntero y me corro 1 lugar para el proximo valor dentro del vector


    printf("primer numero:%d\n",p[0]);

    free(p);


    return 0;
}



/*
1.2 Asignacion dinamica de un vector
Escribe un programa que solicite al usuario ingresar el tama˜no de un vector.
Luego, utiliza malloc() para asignar memoria dinamica para el vector y permite
al usuario ingresar los elementos del vector. Despues, imprime los elementos del
vector y libera la memoria asignada.

*/

int main_1_2(){

    int *p;
    int dimension;

    printf("Ingresar dimension del vector:\n");
    scanf("%d",&dimension);

    p=(int*)malloc(dimension*sizeof(int));

    for(int i=0;i<dimension;i++){
        printf("Ingresar elemento:\n");
        scanf("%d",&p[i]);

    }
    for(int i=0;i<dimension;i++){
        printf("%d\n",p[i]);
    }




    return 0;
}

/*
1.3 Suma de dos vectores dinamicos
Escribe un programa que solicite al usuario ingresar el tama˜no de dos vectores.
Luego, utiliza malloc() para asignar memoria dinamica para ambos vectores
y permite al usuario ingresar los elementos de ambos vectores. Despues, suma
los dos vectores elemento por elemento y almacena el resultado en un tercer
vector dinamico. Finalmente, imprime el vector resultante y libera la memoria
asignada.
*/

int main_1_3(){

    int v1dim,v2dim;
    int *v1;
    int *v2;
    int *v3;

    printf("Ingresar dimension vectores:\n");

    printf("Ingresar v1:\n");
    scanf("%d",&v1dim);

    printf("Ingresar v2:\n");
    scanf("%d",&v2dim);

    v1=(int*)malloc(v1dim*sizeof(int));
    v2=(int*)malloc(v2dim*sizeof(int));

    printf("_______VECTOR 1_______\n");
    for(int i=0;i<v1dim;i++){
        printf("valor posicion %d:\n",i+1);
        scanf("%d",&v1[i]);

    }

    printf("_______VECTOR 2_______\n");
    for(int i=0;i<v2dim;i++){
        printf("valor posicion %d:\n",i+1);
        scanf("%d",&v2[i]);
    }
    //check tamaño mas grande para iterar la suma
    //caso v1 mas grande que v2
    if(v1dim>v2dim){
        //resize tamaño de vector mas pequeño con el mas grande
        //y rellena con 0 espacios faltantes

        v3=(int*)calloc(v1dim,sizeof(int));

        for(int i=0;i<v2dim;i++){
            v3[i]=v2[i];
        }
        for(int i=0;i<v1dim;i++){
            v3[i]+=+v1[i];
        }
    //caso v1 mas chico que v2
    }else if(v1dim<v2dim){

        v3=(int*)calloc(v2dim,sizeof(int));

        for(int i=0;i<v1dim;i++){
            v3[i]=v1[i];
        }
        for(int i=0;i<v2dim;i++){
            v3[i]+=+v2[i];
        }
    //caso v1 igual a v2
    }else{
       for(int i=0;i<v1dim;i++){
            v1[i]+=+v2[i];
            v3[i]=v1[i];
        }

    }

    doble_enter();

    //printea resultado
    for(int i=0;i<v1dim;i++){
        printf("index[%d]: %d\n",i,v3[i]);
    }
    free(v1);
    free(v2);
    free(v3);
return 0;
}


/*
1.4 Asignacion dinamica de una matriz
Escribe un programa que solicite al usuario ingresar el numero de filas y
columnas de una matriz. Luego, utiliza malloc() para asignar memoria dinamica
para la matriz y permite al usuario ingresar los elementos de la misma.
Finalmente,imprime la matriz y libera la memoria asignada.
*/

int main(void){

    int *f;
    int *c;

    printf("Ingresar tama%co de matriz:\n",164);

    printf("Ingresar fila:");
    scanf("%d",&f);

    printf("Ingresar columna:");
    scanf("%d",&c);

    doble_enter();




    printf("fila:%d\ncolumna:%d\n",f,c);


    return 0;
}


/* VECTOR AUTO REDIMENCIONABLE
int main(){

    int option;
    int i=0;
    int contador=1;
    int *p;
    p =(int*)malloc(1*sizeof(int));

    do{

        printf("Ingresar elemento:\n");
        scanf("%d",&p[i]);

        printf("Desea seguir ingresando elementos:\n1)Si\n2)No,imprimir\n");
        scanf("%d",&option);
        fflush(stdin);

        if(option==1){
            contador++;
            p =(int*)realloc(p,contador*sizeof(int));
        }
        i++;

    }while(option!=2);
    printf("contador:%d\n",contador);

    for(int i=0;i<contador;i++){
        printf("%d\n",p[i]);

    }

    free(p);

 return 0;

}
*/
