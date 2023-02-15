

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	int opcion,noItem, noArticulo;
	char descripcion[500], genero[25], clasificacion[12], consola[12];
	float precioUni, impuestos, precioTot;

	cout << "           " << endl;
	system("Color 06");
	cout << "**MENU DE OPCIONES**" << endl;

	cout << "           " << endl;
	cout << "¿Que desea hacer?. Ingrese el numero de la opcion que quiere realizar." << endl;
	cout << "           " << endl;
	cout << "1. Alta de Articulo." << endl;
	cout << "2.- Modificacion de Articulo." << endl;
	cout << "3.- Baja de Articulo." << endl;
	cout << "4.- Lista de Articulos." << endl;
	cout << "5.- Limpiar Pantalla." << endl;
	cout << "6.- Salir." << endl;
	
	cin >> opcion;

	switch (opcion)
	{
	case 1:
		cout << "Ingreae el no de item." << endl;
		cin >> noItem;
		cout << "Ingrese el numero de articulo. " << endl;
		cin >> noArticulo;
		cout << "Ingrese la descripcion del articulo." << endl;
		cin >> descripcion;
		cout << "Ingrese el genero." << endl;
		cin >> genero;
		cout << "Ingrese la clasificacion." << endl;
		cin >> clasificacion;
		cout << "Ingrese para que consola." << endl;
		cin >> consola;
		cout << "Ingrese el precio unitario." << endl;
		cin >> precioUni;
		impuestos = (precioUni * 16) / 100;
		precioTot = precioUni + impuestos;

		return main();

		break;

	case 2:

		break;

	case 3:
		break;

	case 4:
		break;

	case 5:
		system("cls");
		return main();
		break;

	case 6:

		exit(1);
		break;

	}

	
}