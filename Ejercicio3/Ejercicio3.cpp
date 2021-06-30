// Ejercicio3.cpp: Serie de Fibonacci en un array.
/*
Hacer un programa en C++ que almacene la serie de Fibonacci en un array.
La serie de Fibonaccie es la sucesión de números:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
Cada número se calcula sumando los dos anteriores a él.
*/

#include <iostream>   
using namespace std; 
#define CONST 20

int main()
{               
    // Declaración de constantes y variables
    int array[CONST];
    array[0] = 0;
    array[1] = 1;
    int serie;

    //Proceso
    cout << "La serie de Fibonacci hasta " << CONST << " en el array es:" << endl;
    for (int c = 0; c < CONST ; c++) {
        if (c == 0 || c == 1) {
            cout << array[c] << endl;
        }
        else {
            array[c] = array[c - 1] + array[c - 2];
            serie = array[c];
            cout << serie << endl;
        }
    }
   
} 