

#include <iostream>
#include <math.h> 
#include <conio.h> 
#include <stdio.h>
#include <string.h>
#include <string>
#include <wchar.h>
using  namespace std;


struct tienda
{
    int noItem, noArticulo;
    string descripcion, genero, clasificacion, consola;
    float precioUni, precioTot;
};


int main()
{
    int opcion;
    float impuestos;
    tienda productos[3];


    do
    {
        //MENU DE OPCIONES
        cout << "           " << endl;
        system("Color 06");
        printf(" * *MENU DE OPCIONES * * \n");
        cout << "           " << endl;
        printf("Ingrese el numero de la opcion que quiere realizar. \n");
        cout << "           " << endl;
        printf("1. Alta de Articulo. \n");
        printf("2.- Modificacion de Articulo. \n");
        printf("3.- Baja de Articulo. \n");
        printf("4.- Lista de Articulos.\n");
        printf("5.- Limpiar Pantalla. \n");
        printf("6.- Salir. \n");
        scanf_s("%d", &opcion);

        switch (opcion)
        {
        case 1: //ALTA DE ARTICULOS
            for (int i = 0; i < 3; i++)
            {
                cout << "    " << endl;
                printf("Ingrese el no de item. \n");
                scanf_s("%d", &productos[i].noItem);

                printf("Ingrese el numero de articulos. \n");
                scanf_s("%d", &productos[i].noArticulo);

                cin.ignore();
                printf("Ingrese la descripcion del articulo. \n");
                getline(cin, productos[i].descripcion);

                printf("Ingrese el genero. \n");
                getline(cin, productos[i].genero);

                printf("Ingrese la clasificacion. \n");
                getline(cin, productos[i].clasificacion);

                printf("Ingrese la consola. \n");
                getline(cin, productos[i].consola);

                printf("Ingrese el precio unitario. \n");
                scanf_s("%f", &productos[i].precioUni);

                impuestos = (productos[i].precioUni * 16) / 100; //operaciones para sacar el precio con impuestos
                productos[i].precioTot = productos[i].precioUni + impuestos;

            }
            break;
        case 2: //MODIFICACION DE ARTICULOS
            break;

        case 3: //BAJA ARTICULOS
            break;

        case 4: //LISTA DE ARTICULOS
            for (int i = 0; i < 3; i++)
            {
                cout << "    " << endl;
                printf("GENERO: %s \n", productos[i].genero.c_str());
                printf("CLASIFICACION: %s \n", productos[i].clasificacion.c_str());
                printf("CONSOLA: %s \n", productos[i].consola.c_str());

            }
            break;

        case 5:
            system("cls"); //LIMPIAR PANTALLA
            break;
        case 6:
            exit(1); //CERRAR PANTALLA
            break;

        }
    } while (opcion != 6);
}