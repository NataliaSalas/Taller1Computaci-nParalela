# Taller1ComputacionParalela

## Taller c
1. Escribe un programa en C que acepte dos enteros del usuario y calcule el producto de los
dos enteros.
> **Datos de prueba:**\
> Introduzca el primer entero: 25 \
>Introduzca el segundo entero: 15 \
>**Salida esperada:**\
>Producto de los dos enteros anteriores = 375 

2. Escribe un programa en C para convertir los días especificados en años, semanas y días.
Nota: Ignore el año bisiesto.
> **Datos de prueba:**\
> Número de días: 1329\
> **Salida esperada:**\
> Años: 3 \
> Semanas 33\
> Días: 3 

3. Escribe un programa en C para calcular la distancia entre los dos puntos.
> **Datos de prueba:**\
> Entrada x1: 25 \
> Entrada y1: 15 \
> Entrada x2: 35 \
> Entrada y2: 10 \
> **Resultado esperado:**\
> Distancia entre dichos puntos: 11.1803

4. Escribe un programa en C para mostrar los 10 primeros números naturales.
Salida esperada :
> **Salida esperada:**\
> 1 2 3 4 5 6 7 8 9 10

5. Escribe un programa en C para mostrar el patrón como triángulo rectángulo usando un
asterisco. La cantidad de líneas del triángulo es ingresada por consola por el usuario, y el valor
máximo de líneas es de 14.
> El patrón como:\
> **Datos de prueba:**\
> Introduzca la cantidad de líneas del triángulo: 4\
> **Salida esperada:**\
> *\
> **\
> ***\
> ****\

6. Escribe un programa que imprima una matriz de “1”, de tamaño NxN. El tamaño es
indicado por el usuario y debe ser siempre menor que 8.
> **Datos de prueba:**\
> Ingrese el Tamaño de la Matriz: 4\
> **Salida esperada:**\
> [1][1][1][1]\
> [1][1][1][1]\
> [1][1][1][1]\
> [1][1][1][1]

7. Escribe un programa que imprima una matriz de números aleatorios enteros, entre 0 y 9, de
de tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
> **Datos de prueba:**\
> Ingrese el Tamaño de la Matriz: 4\
> **Salida esperada:**\
> [5][1][6][9]\
> [4][8][9][0]\
> [3][5][6][8]\
> [2][8][2][0]

8. Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
Finalmente, se presenta la suma de las dos matrices.
> **Datos de prueba:**\
> Ingrese el Tamaño de la Matriz: 4\
> **Salida esperada:**\
> Matriz 1 =  
> [9][4][1][0]\
> [9][3][3][4]\
> [0][1][1][1]\
> [9][2][3][9]\
> Matriz 2 =\
> [2][2][4][3]\
> [9][0][5][8]\
> [3][3][1][5]\
> [2][1][2][3]\
> Suma de las matrices 1 y 2=\
> [11][6][5][3]\
> [18][3][8][12]\
> [3][4][2][6]\
> [11][3][5][12]

9. Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
Finalmente, se presenta la resta de las dos matrices.
> **Datos de prueba:**\
> Ingrese el Tamaño de la Matriz: 4\
> **Salida esperada:**\
> Matriz 1 = \
> [1][6][2][0]\
> [1][8][8][4]\
> [2][2][3][1]\
> [9][7][7][2]\
> Matriz 2 =\
> [0][5][5][7]\
> [4][6][4][6]\
> [9][3][3][1]\
> [4][7][3][8]\
> Resta de las matrices 1 y 2=\ 
> [1][1][-3][-7]\
> [-3][2][4][-2]\
> [-7][-1][0][0]\
> [5][0][4][-6]

10. Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
Finalmente, se presenta el producto de las dos matrices.
> **Datos de prueba:**\
> Ingrese el Tamaño de la Matriz: 4\
> **Salida esperada:**\
> Matriz 1 = \
> [0][0][0][1]\
> [5][2][8][2]\
> [6][9][5][8]\
> [7][5][1][5]\
> Matriz 2 =\ 
> [1][4][8][4]\
> [4][5][3][1]\
> [6][6][8][0]\
> [5][6][7][2]\
> Producto de las matrices 1 y 2=\ 
> [0][0][0][4]\
> [20][10][24][2]\
> [36][54][40][0]\
> [35][30][7][10]

## Contenido
- Todos los ejercicios se encuentran en un solo programa con un menú de opciones 
- Este compuesto por los siguientes archivos:
> - Taller1.c: Se encuentra todo el programa 
> - taller1_lib.c: Contiene cada una de las funciones y los métodos 
> - taller1_lib.h: Es la interfaz del taller1_lib.c, incluye 
> - taller1_main.c: El programa principal, incluye el encabezado taller1_lib.h y este es el que ejecuta el usuario 
> - Makefile: Es un archivo que define el conjunto de tareas a ejecutar
