// Ejercicio2.cpp
//Arrays - Calcular el mayor, la posición introducida, el menor, la posición introducida, la suma y el promedio de los datos almacenados en un vector de forma aleatoria.
#include <locale.h>
#include <iostream>
#include <stdlib.h>//Biblioteca estándar de C++ con funciones random
using namespace std;
#define NUMERO 20

int main()
{
	setlocale(LC_ALL, ".UTF8");
	//Variables
	int array[NUMERO];
	const int MINIMO = 10;
	const int MAXIMO = 21;

	//Introducir los datos en el array
	for (int c = 0; c < NUMERO; c++) {
		array[c] = rand() % MAXIMO + MINIMO;
		cout << "p" << c << " - El dato " << c + 1 << " es " << array[c] << endl;
	}

	//Tratar el array 
	//Calcular el mayor, el menor, la suma y el promedio
	int mayor = array[0];
	int menor = array[0];
	int suma = array[0];
	int pmayor = 0;
	int pmenor = 0;
	for (int c = 1; c < NUMERO; c++) {
		if (array[c] > mayor) {
			mayor = array[c];
			pmayor = c;
		}
		if (array[c] < menor) {
			menor = array[c];
			pmenor = c;
		}
		suma += array[c];
	}
	double promedio = (double)suma / (double)NUMERO;
	cout << "El numero mayor es " << mayor << " y se encuentra en la posicion " << pmayor << endl;
	cout << "El numero menor es " << menor << " y se encuentra en la posicion " << pmenor << endl;
	cout << "La suma es " << suma << endl;
	cout << "El promedio es " << promedio << endl;
}