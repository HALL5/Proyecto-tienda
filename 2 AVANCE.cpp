#include <iostream>
#include <math.h> // calculos matematicos
#include <conio.h> 
#include <stdio.h>
#include <string.h>
#include <string>
#include <wchar.h>
using  namespace std;

struct alumnos
{
    char nombre[20];
    string apellido;
    int matricula;
    float c1, c2, c3, promedio, lab, desicion;

};

int main()
{
    alumnos calf[3];
    int opcion;

    //alta de calificacion
    //modificacion calificacion 
    //baja de alumno
    //lista
    //limpiar pantalla
    //salir;
    do
    {
        cout << "\t ***MENU DE OPCIONES***" << endl; // \t es tabulador
        cout << "1.-Alta" << endl;
        cout << "2.-Modificacion" << endl;
        cout << "3-Baja" << endl;
        cout << "4.-Lista" << endl;
        cout << "5.-Limpiar Pantalla" << endl;
        cout << "6.-Salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1: //ALTA
            for (int i = 0; i < 3; i++)
            {
                printf("ingrese matricula \n");
                scanf_s("%d", &calf[i].matricula);

                cin.ignore();
                printf("ingrese nombre \n");
                gets_s(calf[i].nombre);
                printf("ingrese apellido \n");
                getline(cin, calf[i].apellido);
                printf("ingrese las calificacion y lab \n");
                scanf_s("%f %f %f %f", &calf[i].c1, &calf[i].c2, &calf[i].c3, &calf[i].lab);

                calf[i].promedio = (calf[i].c1 + calf[i].c2 + calf[i].c3) / 3;

            }
            break;
        case 2:
            break;

        case 3:
            break;

        case 4: //LISTA
            for (int i = 0; i < 3; i++)
            {
                printf("MATRICULA %d \n", calf[i].matricula);
                printf("NOMBRE: %s \n", calf[i].nombre);
                printf("APELLIDO: %s \n", calf[i].apellido.c_str());

                if (calf[i].promedio >= 60)
                {
                    if (calf[i].lab >= 70)
                    {
                        calf[i].promedio = (calf[i].promedio + calf[i].lab) / 2;
                    }
                }
                printf("PROMEDIO %f \n", calf[i].promedio);

            }
            break;

        case 5:
            system("cls"); // limpiar pantalla
            break;
        case 6:
            exit(1); // cierra la pantalla
            break;

        }
    } while (opcion!=6);
}