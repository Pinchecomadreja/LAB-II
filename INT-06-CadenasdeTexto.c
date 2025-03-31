#include<stdio.h>
#include<string.h>


/*
int main(void){

    char nombre[20];
    printf("Ingresar nombre completo:\n");
    fgets(nombre,sizeof(nombre),stdin);

    printf("%s\n",nombre);


    return 0;
}
*/

//fgets(nombre,sizeof(nombre),stdin);//tomar valor
//nombre[strcspn(nombre,"\n")]='\0';//cambia el enter por finalizacion de input

/*
1.1 Longitud de una cadena
Escribe una funcion en C que tome una cadena como entrada y devuelva la
longitud de esa cadena utilizando punteros y funciones de la libreria string.h.
*/

void stringlen(char *string){

    int largo;

    largo = strlen(string);
    printf("largo de cadena: %d\n",largo);


}
int main_1_1(void){

    char string[20];

    printf("Ingresar texto:\n");
    fgets(string,sizeof(string),stdin);
    string[strcspn(string,"\n")]='\0';

    //strcspn es una funcion que busca la aparicion de un caracter especifico en el vector dado
    //strcspn(vector,char buscado)
    //alli da la posicion en el vector cadena e lo iguala a '\0'(nulo)

    stringlen(string);

    return 0;
}

/*
1.2
Escribe una funcion que tome dos cadenas como entrada y las concatene en una
tercera cadena utilizando punteros y funciones de la libreria string.h.
*/


void concatenar(char *cadena1,char *cadena2,char *cadena3){

    strcpy(cadena3,cadena1);
    //copia desde fuente a destino (destino,fuente)

    strcat(cadena3,cadena2);
    //concatena el string fuente al string destino en la ultima posiicon del destino

    cadena3[strcspn(cadena3,"\n")]=' ';
    printf("%s",cadena3);

}

int main_1_2(void){

    char cadena1[20];
    char cadena2[20];
    char cadena3[20];

    printf("Ingresar texto1:\n");
    fgets(cadena1,sizeof(cadena1),stdin);

    printf("Ingresar texto2:\n");
    fgets(cadena2,sizeof(cadena2),stdin);

    concatenar(cadena1,cadena2,cadena3);


    return 0;
}

/*
1.3 Comparacion de cadenas
Escribe una funcion que tome dos cadenas como entrada y determine si son
iguales o no utilizando punteros y funciones de la libreria string.h.
*/

void comparar(char*string1,char*string2){

    int cmp;

    cmp = strcoll(string1,string2);

    printf("%d\n",cmp);

    if(cmp!=0){
        if(cmp<0){
            printf("String 1 < String 2!");

        }else if(cmp>0){
            printf("String 1 > String 2!");
        }
    }else{
        printf("Strings iguales!");
    }

    //comparar dos string y retorna n , n= numero real entero
    // 0 si string1 = string2
    // +n si string1 > string2
    //-n si string1 < string2
}

int main_1_3(void){

    char string1[20];
    char string2[20];

    printf("Ingresar texto1:\n");
    fgets(string1,sizeof(string1),stdin);

    printf("Ingresar texto2:\n");
    fgets(string2,sizeof(string2),stdin);

    comparar(string1,string2);



    return 0;
}

/*
1.4 Copia de cadenas
Escribe una funcion que tome una cadena como entrada y la copie en otra cadena
utilizando punteros y funciones de la libreria string.h.
*/


void copystrings(char *string1,char *string2){


    strcpy(string2,string1);

    printf("Resultado de traslado: %s",string1);


}


int main_1_4(void){

    char string1[20];
    char string2[20];

    printf("Ingresar texto a trasladar:\n");
    fgets(string1,sizeof(string1),stdin);
    string1[strcspn(string1,"\n")]='\0';


    copystrings(string1,string2);

    return 0;
}


/*
1.5 Inversion de una cadena
Escribe una funcion que tome una cadena como entrada y la invierta utilizando
punteros y funciones de la libreria string.h.
*/

void reverse_string(char *string1){

    char rev_string[40];
    int k=0;
    int len;

    len = strcspn(string1,"\n");
    printf("%d",len);// impreme un char alaeatorio en memoria???

    for(int i = len;i>-1;i--){

        k++;
        rev_string[k]=string1[i];


    }
    printf("%s",rev_string);
}

int main_1_5(void){

    char string1[40];


    printf("Ingresar texto:\n");
    fgets(string1,sizeof(string1),stdin);
    //string1[strspn(string1,"\n")]='\0';


    reverse_string(string1);


    return 0;

}

/*
1.6 Busqueda de un caracter en una cadena
Escribe una funcion que tome una cadena y un caracter como entrada, y devuelva
la posicion de la primera ocurrencia de ese caracter en la cadena utilizando
punteros y funciones de la libreria string.h.
*/

void search_for(char *string,char *character){
//devuelve el index de dicha letra
    int index = 0;
    int len =strcspn(string,"\n");

    for(int i=0;i<len;i++){
        index++;
        if(string[i]==*character){
            printf("letra %c en index: %d\n",*character,index);
        }
    }
}

int main_1_6(void){

    char character;
    char string[40];

    printf("Ingresar texto:\n");
    fgets(string,sizeof(string),stdin);
    fflush(stdin);

    printf("Ingresar texto:\n");
    scanf("%c",&character);

    search_for(string,&character);

    return 0;
}

/*
1.7 Eliminacion de un caracter de una cadena
Escribe una funcion que tome una cadena y un caracter como entrada, y elimine
todas las ocurrencias de ese caracter en la cadena utilizando punteros y funciones
de la libreria string.h.
*/
void borrar(char *string,char *character){
    for()

}





void borrar(char *string,char *character){
//devuelve el index de dicha letra
    int index = 0;
    int len =strcspn(string,"\n");

    for(int i=0;i<len;i++){
        index++;
        if(string[i]==*character){
            printf("letra %c en index: %d\n",*character,index);
        }
    }
}





int main_1_7(){



    return 0;
}



int main(void){
    main_1_7();
/*
    int option;

    do{
        printf("Ingresar numero de programa:\n");
        scanf("%d",&option);
        fflush(stdin);

        switch(option){
            case 0:
                printf("---Exit---");
                break;
            case 1:
                main_1_1();
                break;
            case 2:
                main_1_2();
                break;
            case 3:
                main_1_3();
                break;
            case 4:
                main_1_4();
                break;
            case 5:
                main_1_5();
                break;
            case 6:
                main_1_6();
                break;
            case 7:
                main_1_7();
                break;

            default:
                printf("Opcion no valida!");

        }
    }while(option!=0);
*/
    return 0;
}
