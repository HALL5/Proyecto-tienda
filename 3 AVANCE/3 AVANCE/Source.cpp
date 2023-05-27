
#include <iostream>
#include <conio.h> 
#include <stdio.h>
#include <string.h>
#include <string>
#include <wchar.h>
#include <fstream>
#include <stdlib.h>
using  namespace std;


struct tienda
{
    int noItem, noArticulo;
    string descripcion, genero, clasificacion, consola, status;
    float precioUni, precioTot, IVA;
};
int cant;
tienda* productos;

void alta();
void modificacion();
void baja();
void lista();
void archivo();

int main()
{
    int opcion;

    do
    {
        //MENU DE OPCIONES
        cout << "           " << endl;
        system("Color 06");
        printf(" ***** MENU DE OPCIONES ***** \n");
        cout << "           " << endl;
        printf("Ingrese el numero de la opcion que quiere realizar. \n");
        cout << "           " << endl;
        printf("1. Alta de Articulo. \n");
        printf("2.- Modificacion de Articulo. \n");
        printf("3.- Baja de Articulo. \n");
        printf("4.- Lista de Articulos.\n");
        printf("5.- Limpiar Pantalla. \n");
        printf("6.- Archivo. \n");
        printf("7.- Salir. \n");
        scanf_s("%d", &opcion);

        switch (opcion)
        {
        case 1: //ALTA DE ARTICULOS
            alta();
            break;

        case 2: //MODIFICACION DE ARTICULOS
            modificacion();
            break;

        case 3: //BAJA ARTICULOS
            baja();
            break;

        case 4: //LISTA DE ARTICULOS
            lista();
            break;

        case 5:
            system("cls"); //LIMPIAR PANTALLA
            break;

        case 6:
            archivo(); //CREAR ARCHIVO
            break;

        case 7:
            exit(1); //CERRAR PANTALLA
            break;
        }
    } while (opcion != 6);
}

void alta()
{


    printf("Cuantos articulos desea dar de alta. \n");
    scanf_s("%d", &cant);
    productos = new tienda[cant];

    for (int i = 0; i < cant; i++)
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


        //operaciones para sacar el precio con impuestos
        productos[i].IVA = (productos[i].precioUni * 16) / 100;
        productos[i].precioTot = productos[i].precioUni + productos[i].IVA;


    }
}
void modificacion()
{
    int j = 1, opcion = 0, opcion2 = 0;
    float impuestos;
    do
    {
        printf("Ingrese el numero del registro que desea modificar. \n");
        scanf_s("%d", &j);
        j = j - 1;
        for (int i = j; i == j; i++)
        {
            if (productos[i].status == "Eliminado" || j > cant - 1 || j < 0)
            {
                cout << "     " << endl;
                printf("Registro Eliminado o Inexistente. \n");
                printf("Ingrese un registro valido. \n");
                opcion2 = 1;
            }
            else
            {
                opcion2 = 2;
            }
        }
    } while (opcion2 == 1);
    printf("Ingrese que desea modificar. \n");
    printf("1.-No. de item \n");
    printf("2.-Numero de articulos. \n");
    printf("3.-Descripcion del articulo. \n");
    printf("4.-Genero. \n");
    printf("5.-Clasificacion. \n");
    printf("6.-Consola. \n");
    printf("7.-Precio Unitario. \n");

    scanf_s("%d", &opcion);

    switch (opcion)
    {
    case 1:
        for (int i = j; i == j; i++)
        {
            printf("Ingrese el no de item. \n");
            scanf_s("%d", &productos[i].noItem);
        }
        break;
    case 2:
        for (int i = j; i == j; i++)
        {
            printf("Ingrese el numero de articulos. \n");
            scanf_s("%d", &productos[i].noArticulo);
        }
        break;
    case 3:
        for (int i = j; i == j; i++)
        {
            while (getchar() != '\n');
            cin.ignore();
            printf("Ingrese la descripcion del articulo. \n");
            getline(cin, productos[i].descripcion);
        }
        break;

    case 4:
        for (int i = j; i == j; i++)
        {
            while (getchar() != '\n');
            printf("Ingrese el genero. \n");
            getline(cin, productos[i].genero);
        }
        break;
    case 5:
        for (int i = j; i == j; i++)
        {
            while (getchar() != '\n');
            printf("Ingrese la clasificacion. \n");
            getline(cin, productos[i].clasificacion);
        }
        break;
    case 6:
        for (int i = j; i == j; i++)
        {
            while (getchar() != '\n');
            printf("Ingrese la consola. \n");
            getline(cin, productos[i].consola);
        }
        break;
    case 7:
        for (int i = j; i == j; i++)
        {
            printf("Ingrese el precio unitario. \n");
            scanf_s("%f", &productos[i].precioUni);
            break;
            impuestos = (productos[i].precioUni * 16) / 100; //operaciones para sacar el precio con impuestos
            productos[i].precioTot = productos[i].precioUni + impuestos;
        }
        break;
    }

}
void baja()
{
    int j = 1, opcion = 0, opcion2 = 0;
    float impuestos;
    do
    {
        printf("Ingrese el numero del registro que desea eliminar. \n");
        scanf_s("%d", &j);
        j = j - 1;
        for (int i = j; i == j; i++)
        {
            if (productos[i].status == "Eliminado" || j > cant - 1 || j < 0)
            {
                cout << "     " << endl;
                printf("Registro Eliminado o Inexistente. \n");
                printf("Ingrese un registro valido. \n");
                opcion2 = 1;
            }
            else
            {
                opcion2 = 2;
            }
        }
    } while (opcion2 == 1);

    for (int i = j; i == j; i++)
    {
        printf("Eliminando registro.\n");
        productos[i].status = "Eliminado";
    }



}
void lista()
{
    for (int i = 0; i < cant; i++)
    {
        if (productos[i].status == "Eliminado")
        {
            cout << "     " << endl;
            printf("Registro Eliminado. \n");
        }
        else
        {
            cout << "    " << endl;

            printf("NO. DE ITEM: %d \n", productos[i].noItem);
            printf("NO. DE ARTICULOS: %d \n", productos[i].noArticulo);
            printf("DESCRIPCION:%s \n", productos[i].descripcion.c_str());
            printf("GENERO: %s \n", productos[i].genero.c_str());
            printf("CLASIFICACION: %s \n", productos[i].clasificacion.c_str());
            printf("CONSOLA: %s \n", productos[i].consola.c_str());
            printf("PRECIO UNITARIO: %f \n", productos[i].precioUni);
            printf("IVA: %f \n", productos[i].IVA);
            printf("PRECIO TOTAL: %f \n", productos[i].precioTot);


        }

    }

}
void archivo()
{
    ofstream archivo; //declarar variable tipo archivo
    int texto;
    string texto2;


    archivo.open("tienda.txt");



    if (!archivo.is_open()) //si archivo esta diferente de abierto
    {
        printf("ERROR, EL ARCHIVO NO SE PUDO CREAR. \n");
        exit(1);
    }
    else
    {
        printf("Archivo cargado correctamente bajo el nombre tienda.txt. \n");

        for (int i = 0; i < cant; i++)
        {
            archivo << "REGISTRO " << i + 1 << "\n";
            if (productos[i].status == "Eliminado")
            {
                texto2 = "REGISTRO ELIMINADO.";
                texto = i;
                archivo << texto2 << texto << "\n";
            }
            else
            {
                texto = productos[i].noItem;
                archivo << "No.de item" << "\n";
                archivo << texto << "\n";
                archivo << "Numero de articulos" << "\n";
                texto = productos[i].noArticulo;
                archivo << texto << "\n";
                archivo << "Descripcion del articulo" << "\n";
                texto2 = productos[i].descripcion;
                archivo << texto2 << "\n";
                archivo << "Genero" << "\n";
                texto2 = productos[i].genero;
                archivo << texto2 << "\n";
                archivo << "Clasificacion" << "\n";
                texto2 = productos[i].clasificacion;
                archivo << texto2 << "\n";
                archivo << "Consola" << "\n";
                texto2 = productos[i].consola;
                archivo << texto2 << "\n";
                archivo << "Precio Unitario" << "\n";
                texto = productos[i].precioUni;
                archivo << texto << "\n";
                archivo << "       " << "\n";



            }
        }
        archivo.close();
    }
}
