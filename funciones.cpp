#include "funciones.h"
#include <string>
#include <iostream>
using namespace std;

int pot(int a, int n) {
	int total=1;
	int z;
	for (int i = 1; i < n; i++) {
		z = i;
		total *=a;
	}
	cout << z + 1 << endl;
	return total;
}

int busquedaSec(int arreglo[], int n, int k) {
	int x = 0;
	while (x < n) {
		if (arreglo[x] == k) {
			cout << "resul"<< x << endl;
			return x;
		}
		x++;
	}
	return -1;
}

void swap(int arreglo[],int i, int j) {
	int tmp;
	tmp = arreglo[j];
	arreglo[j] = arreglo[j + 1];
	arreglo[j + 1] = tmp;
	

}
void burbuja(int arreglo[],int sizer) {

	for (int i = 0; i < (sizer-2); i++) {
		
		for (int j = 0; j < (sizer - 2 - i); j++) {
			
			if (arreglo[j + 1] < arreglo[j]) {
				//hey++;
				
				swap(arreglo, i, j);
			}
		}
	}
	for (int z = 0; z < sizer; z++) {
		cout <<arreglo[z] << endl;
	}
	
}

void ordenSeleccion(int arreglo[], int sizer) {
	int min;
	
	for (int i = 0; i < (sizer - 1); i++) {
		min = i;
		for (int j = i + 1; j < sizer ; j++) {

			if (arreglo[j] < arreglo[min]) {
				min = j;
			}
		swap(arreglo, i, min);
			
		}
	}
	for (int z = 0; z < sizer; z++) {
		cout << arreglo[z] << endl;
	}

}

int emparejamientoCadenas(string T[], string P[], int n, int m) {
	// t arreglo con la palabra mas extensa
	// p arreglo que tiene la palabra a buscar
	// n= tamaño de t
	// m= tamaño de p
	for (int i = 0; i < (n - m); i++) {
		int j = 0;

		while (j < m && P[j] == T[i + j]) {
			j = j + 1; 
		}
		if (j == m) {
			return i;
		}
	}
	
	return -1;

}