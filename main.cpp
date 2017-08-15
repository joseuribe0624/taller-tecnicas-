#include<iostream>
#include<string>
#include"funciones.h"
using namespace std;

int main() {
	//a is num base 
	//n pot 
	//k number for search 
	// c and z equal rreturns 
	int a, n, c, z, k, sizer, choose;

	sizer = 6;

	int arreglo[] = { 7,5,2,4,6,8};

	string T[] = { "h","o","l","a","m","u","n","d","o","c","r","u","e","l","y","m","a","l","v","a","d","o" };

	string P[] = { "c","l","e","e","l" };

	//size of the arrays

	int size1 = (sizeof(T) / sizeof(*T));

	int size2=(sizeof(P) / sizeof(*P));

	cout << "enter 1 for potencia" << endl<< "enter 2 for busqueda Secuencial" << endl
		<<"enter 3 ordenamientoBurbuja"<<endl<<"enter 4 orden por seleccion"<<endl
		<<"enter 5 for  empajeramiento con cadenas"<<endl <<"enter 6 to out" <<endl;
	
	while (1) {
		cin >> choose;
		switch (choose) {
		case 1:
			cout << "enter base a" << endl;
			cin >> a;
			cout << "enter pot n" << endl;
			cin >> n;
			c = pot(a, n);
			cout << "potencia = " << c << endl;
			break;

		case 2:
			cout << "enter number to search k" << endl;
			cin >> k;
			z = busquedaSec(arreglo, sizer, k);
			cout << "number is = " << z << endl;
			break;
		case 3:
			burbuja(arreglo, sizer);
			break;
		case 4: 
			ordenSeleccion(arreglo, sizer);
			break;
		case 5:
			int result;
			result=emparejamientoCadenas(T, P, size1, size2);
			cout << "result = " << result << endl;
			break;
		case 6:
			exit(0);
		}
	}
	
	int lol;
	cout << "enter" << endl;
	cin >> lol;
	return 0;
}