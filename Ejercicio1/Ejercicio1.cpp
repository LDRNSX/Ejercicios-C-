// Ejercicio1.cpp 
//Mayor, menor, suma y promedio de un numero determinado de datos
// Realizar un programa en C++ que lea un número determinado de datos y calcule el mayor, el menor , la suma y la media de los datos leídos.

#include <iostream>
using namespace std;


int main()
{
	int dato, numeroDatos, contador, mayor, menor, suma;
	double promedio;

	cout << "Indicar el numero de datos a tratar:" << endl;
	cin >> numeroDatos;
	for (contador = 1; contador <= numeroDatos; contador++) {
		cout << "Introducir el dato " << contador << " a tratar : " << endl;
		cin >> dato;
		if(contador==1){
			mayor = dato;
			menor = dato;
			suma = dato;
		}
		else {
			if (dato > mayor) { mayor = dato;}
			if (dato < menor) { menor = dato;}
			suma += dato;
		}
	}
	promedio = suma / numeroDatos;
	cout << "El mayor es " << mayor << endl;
	cout << "El menor es " << menor << endl;
	cout << "La suma es " << suma << endl;
	cout << "El promedio es " << promedio << endl;
}