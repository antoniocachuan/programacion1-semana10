
#include "pch.h"
#include <iostream>
using namespace std;

void factorialParametroReferencia(int &n) {
	int *resultado = new int;
	*resultado = 1;

	for (int i = 1; i <= n; i++)
	{
		*resultado = *resultado * i;
	}

	cout << "El factorial es: " << *resultado<<endl;
	
}

void factorialParametroReferenciaPuntero(int *n) {
	int *resultado;
	resultado = new int;
	*resultado = 1;

	for (int i = 1; i <= *n; i++)
	{
		*resultado = *resultado * i;
	}

	cout << "El factorial es: " << *resultado << endl;

}

void romboParametroReferenciaPuntero(int *n) {

	for (int j = 0; j < *n; ++j) {
		for (int i = 0; i < *n - j - 1; ++i)
			cout << "  ";
		for (int i = 0; i < 2 * j + 1; ++i)
			cout << i + 1 << " ";
		cout << endl;
	}

	for (int j = *n - 2; j >= 0; --j) {
		for (int i = 0; i < *n - j - 1; ++i)
			cout << "  ";
		for (int i = 0; i < 2 * j + 1; ++i)
			cout << i + 1 << " ";
		cout << endl;
	}
}

void romboParametroReferencia(int &n) {

	for (int j = 0; j < n; ++j) {
		for (int i = 0; i < n - j - 1; ++i)
			cout << "  ";
		for (int i = 0; i < 2 * j + 1; ++i)
			cout << i + 1 << " ";
		cout << endl;
	}

	for (int j = n - 2; j >= 0; --j) {
		for (int i = 0; i < n - j - 1; ++i)
			cout << "  ";
		for (int i = 0; i < 2 * j + 1; ++i)
			cout << i + 1 << " ";
		cout << endl;
	}
}

void menu(int *opcion) {
	cout << "MENU PRINCIPAL" << endl;
	cout << "[1] Factorial" << endl;
	cout << "[2] Calcular e^a" << endl;
	cout << "[3] Imprime rombo" << endl;
	cout << "[4] Fin" << endl;
	cout << "Opcion: ";
	cin >> *opcion;
}

int main()
{
	int *n = new int;
	int *opcion = new int;

	do 
	{
		
		menu(opcion);
		cout << *opcion << endl;//Valor
		cout << opcion << endl;//Direccion memoria
		switch (*opcion)
		{
		case 1:
			cout << "Ingrese n:";
			cin >> *n;
			factorialParametroReferencia(*n);//No se crean copias
			factorialParametroReferenciaPuntero(n);
			break;
		case 2:
			break;
		case 3:
			cout << " Ingrese un numero postivo menor a 11: ";
			cin >> *n;
			romboParametroReferencia(*n);
			romboParametroReferenciaPuntero(n);
			break;
		case 4:
			break;
		default:
			cout << "Por favor ingresar una alternativa correcta." << endl;
			break;
		}
	} while (*opcion != 4);

	system("pause");

	return 0;

	/* Recordemos

	int y;
	int *ptrentero;
	int aux;
	cout << "Aprendiendo punteros o variables dinamicas" << endl;

	y = 14;

	ptrentero = &y;

	cout << y << endl;
	cout << ptrentero<<endl; //00F9FB08
	cout << &ptrentero << endl; //0113FDDC
	cout << *ptrentero << endl; //14

	cout <<  sizeof(y) << endl;
	cout << sizeof(ptrentero) << endl;

	*ptrentero = *ptrentero +1;
	aux = *ptrentero;
	cout << *ptrentero << endl; //00F9FB08
	cout << y << endl;
	cout << aux << endl;

	y = 12;
	cout << *ptrentero << endl; //00F9FB08
	cout << y << endl;
	
	cin.get(); cin.get();
	*/
}



