/*******************************************
* Fecha: 09 - Agosto - 2022
* Autor: Natalia Salas
* Materia: Parallel and Distributed Computing
* Primer Taller C
*******************************************/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include "taller1_lib.h"


/*Función que realiza el producto de dos numero*/
void producto(int a, int b){
  int total;
  total=a*b;
  printf( "\n  El producto es: %d\n", total );
}

/*Función que convierte los días especificados en años, semanas y días*/
void dias(int a){
  int años, semanas, dias;
  años = a / 365;
  semanas = (a % 365) / 7;
  dias = (a % 365) % 7;
  printf( "\n  Años: %d\n", años );
  printf( "\n  Semanas: %d\n", semanas );
  printf( "\n  Dias: %d\n", dias );
}

/*Función para calcular distancia entre dos puntos*/
void distancia(int x1, int x2, int y1, int y2){
  float total;
  total=sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  printf( "\n  Distancia entre dichos puntos: %f\n", total );
}

/*Metodo que imprime los 10 primeros números naturales*/
void numero(){
    int contador;
    printf( "\n   " );
    contador = 1;   /* Inicialización del contador */
    while ( contador <= 10 ){ /*Repetir hasta 10*/
        printf( "%d ", contador );   /* Salida */
        contador++;                  /* Incremento del contador */
    }
}

/*Función para mostrar el patrón como triángulo rectángulo*/
void triangulo(int lineas){
  if(lineas<=14){
    for (int i = 1; i <= lineas; i++){
      for (int j = 0; j < i; j++){
        printf("*");
      }
      printf("\n");
    }
  }else{
    printf("El valor máximo de líneas es de 14\n");
  }     
}

/*Función que imprime una matriz de “1”, de tamaño NxN*/
void matriz(int tam){
  if (tam<=8){
    int matriz[tam][tam],i,j;
 
    for(i=0;i<tam;i++){
      for(j=0;j<tam;j++){
        matriz[i][j] = 1;
        printf("[%i]",matriz[i][j]);
      }
      printf("\n");
    }
  }else{
    printf("El tamaño debe ser menor que 8\n");
  }
  
    
}

/*Función que imprime una matriz de números aleatorios enteros, entre 0 y 9, de tamaño NxN*/
void matrizAleatoria(int tam){
  if(tam<=8){
    srand(time(0));
    int matriz[tam][tam],i,j;
 
    for(i=0;i<tam;i++){
      for(j=0;j<tam;j++){
        matriz[i][j] = rand()%10;
        printf("[%i]",matriz[i][j]);
      }
      printf("\n");
    }
  }else{
    printf("El tamaño debe ser menor que 8\n");
  }
  
    
}

/*Función que suma dos matrices*/
void sumaMatrices(int num){
  srand(time(0));
  int matriz[num][num],matriz2[num][num],matriz3[num][num];
  
  if(num<=8){
  	//Se crean 2 matrices con valores aleatorios segun el tamaño ingresado
  	for(int i=0;i<num;i++){
      for(int j=0;j<num;j++){
        matriz[i][j]=rand()%10;
        matriz2[i][j]=rand()%10;
        }
    }
    //Se suman las dos matrices 
    for(int i=0;i<num;i++){
      for(int j=0;j<num;j++){
        matriz3[i][j]=matriz[i][j]+matriz2[i][j];
      }
    }
    //Se imprime la matriz 1
    printf("Matriz 1 = \n");
    for(int i=0;i<num;i++){
      for(int j=0;j<num;j++){
        printf("[%i]",matriz[i][j]);
      }
      printf("\n");
    }
    //Se imprime la matriz 2
    printf("Matriz 2 = \n");
    for(int i=0;i<num;i++){
      for(int j=0;j<num;j++){
        printf("[%i]",matriz2[i][j]);
      }
      printf("\n");
    }
    //Se imprime el resultado de las dos matrices 
    printf("Suma de las matrices 1 y 2= \n");
    for(int i=0;i<num;i++){
      for(int j=0;j<num;j++){
        printf("[%i]",matriz3[i][j]);
      }
      printf("\n");
    }
  }else{
  	printf("El tamaño debe ser menor que 8\n");
  }
}

/*Función que resta dos matrices*/
void restaMatrices(int num){
  srand(time(0));
  int matriz[num][num],matriz2[num][num],matriz3[num][num];
  
  if(num<=8){
  	//Se crean 2 matrices con valores aleatorios segun el tamaño ingresado
  	for(int i=0;i<num;i++){
      for(int j=0;j<num;j++){
      matriz[i][j]=rand()%10;
      matriz2[i][j]=rand()%10;
      }
    }
    //Se resta las matrices 
    for(int i=0;i<num;i++){
      for(int j=0;j<num;j++){
        matriz3[i][j]=matriz[i][j]-matriz2[i][j];
      }
    }
    //Se imprime la matriz 1
    printf("Matriz 1 = \n");
    for(int i=0;i<num;i++){
      for(int j=0;j<num;j++){
        printf("[%i]",matriz[i][j]);
      }
      printf("\n");
    }
    //Se imprime la matriz 2
    printf("Matriz 2 = \n");
    for(int i=0;i<num;i++){
      for(int j=0;j<num;j++){
        printf("[%i]",matriz2[i][j]);
      }
      printf("\n");
    }
    //Se imprime el resultado de las dos matrices 
    printf("Resta de las matrices 1 y 2= \n");
    for(int i=0;i<num;i++){
      for(int j=0;j<num;j++){
        printf("[%i]",matriz3[i][j]);
      }
      printf("\n");
    }
  }else{
  	printf("El tamaño debe ser menor que 8\n");
  }
}


/*Función que hace el producto de las dos matrices*/
void productoMatrices(int num){
  srand(time(0));
  int matriz[num][num],matriz2[num][num],matriz3[num][num];
  
  if(num<=8){
  	//Se crean 2 matrices con valores aleatorios segun el tamaño ingresado
  	for(int i=0;i<num;i++){
      for(int j=0;j<num;j++){
      matriz[i][j]=rand()%10;
      matriz2[i][j]=rand()%10;
      }
    }
    //Se hace el producto de las matrices 
    for(int i=0;i<num;i++){
      for(int j=0;j<num;j++){
        matriz3[i][j]=matriz[i][j]*matriz2[i][j];
      }
    }
    //Se imprime la matriz 1
    printf("Matriz 1 = \n");
    for(int i=0;i<num;i++){
      for(int j=0;j<num;j++){
        printf("[%i]",matriz[i][j]);
      }
      printf("\n");
    }
    //Se imprime la matriz 2
    printf("Matriz 2 = \n");
    for(int i=0;i<num;i++){
      for(int j=0;j<num;j++){
        printf("[%i]",matriz2[i][j]);
      }
      printf("\n");
    }
    //Se imprime el resultado de las dos matrices 
    printf("Producto de las matrices 1 y 2= \n");
    for(int i=0;i<num;i++){
      for(int j=0;j<num;j++){
        printf("[%i]",matriz3[i][j]);
      }
      printf("\n");
    }
  }else{
  	printf("El tamaño debe ser menor que 8\n");
  }
}

/*Metodo que se encarga de iterar por el menú*/
int menu() {
  int opcion;
  int a,b;
  int x1, x2, y1, y2;


    do
    {
        /*Menu*/
        printf("\n**Primer Taller C**");
        printf( "\n1. Calcular el producto de dos enteros");
        printf( "\n2. Convertir los días especificados en años, semanas y días");
        printf( "\n3. Calcular la distancia entre dos puntos");
        printf( "\n4. Mostrar los 10 primeros números naturales" );
        printf( "\n5. Mostrar un triángulo rectángulo usando asteriscos" );
        printf( "\n6. Imprima una matriz de “1”, de tamaño NxN");
        printf( "\n7. Imprima una matriz de números  entre 0 y 9, de tamaño NxN");
        printf( "\n8. Imprima dos matrices de números entre 0 y 9 y la suma de las dos matrices");
        printf( "\n9. Imprima dos matrices de números entre 0 y 9 y la resta de las dos matrices");
        printf( "\n10. Imprima dos matrices de números entre 0 y 9 y el producto de las dos matrices");
        printf( "\n11. Salir");

        /* Filtramos la opción elegida por el usuario */
        do
        {
            printf( "\nIntroduzca opción de 1 a 11: ");
            scanf( "%d", &opcion );

        } while ( opcion < 1 || opcion > 11 );
        /* La opción sólo puede ser entre 1 y 11*/

        switch ( opcion )
        {
            case 1: system("clear");
                    printf( "\n  Introduzca primer numero entero: " );
                    scanf( "%d", &a );
                    printf( "\n  Introduzca segundo numero entero: " );
                    scanf( "%d", &b );
                    producto(a,b);
                    break;

            case 2: system("clear");
                    printf( "\n  Introduzca el número de dias: " );
                    scanf( "%d", &a );
                    dias(a);
                    break;

            case 3: system("clear");
                    printf( "\n  Introduzca el valor de X1: " );
                    scanf( "%d", &x1 );
                    printf( "\n  Introduzca el valor de Y1: " );
                    scanf( "%d", &y1 );
                    printf( "\n  Introduzca el valor de X2: " );
                    scanf( "%d", &x2 );
                    printf( "\n  Introduzca el valor de Y2: " );
                    scanf( "%d", &y2 );
                    distancia(x1, x2, y1, y2);
                    break;
          
            case 4: system("clear");
                    numero();
                    printf("\n");
                    break; 
          
            case 5: system("clear");
                    printf( "\n  Introduzca la cantidad de líneas del triangulo: " );
                    scanf( "%d", &a );
                    triangulo(a);
                    break;
          
            case 6: system("clear");
                    printf("\n Ingrese el Tamaño de la Matriz: ");
                    scanf("%d",&a);
                    matriz(a);
                    break;
          
            case 7: system("clear");
                    printf("\n Ingrese el Tamaño de la Matriz: ");
                    scanf("%d",&a);
                    matrizAleatoria(a);
                    break;
          
            case 8: system("clear");
                    printf("\n Ingrese el Tamaño de la Matriz: ");
                    scanf("%d",&a);
                    sumaMatrices(a);
                    break;
          
            case 9: system("clear");
                    printf("\n Ingrese el Tamaño de la Matriz: ");
                    scanf("%d",&a);
                    restaMatrices(a);
                    break;
          
            case 10:system("clear");
                    printf("\n Ingrese el Tamaño de la Matriz: ");
                    scanf("%d",&a);
                    productoMatrices(a);
                    break;
         }

    } while ( opcion != 11 );

  
  
  return 0;
}
