#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"
// #include <conio.h>

int main()
{
	int opcion, longitud;
	char cad[100];
	do
	{
		printf("\nMENU DE OPCIONES\n");
		printf("1) Verificar si dos palabras son iguales o cual es mayor\n");
		printf("2) calcular el largo de una cadena de texto\n");
		printf("3) copiar una cadena en otra\n");
		printf("4) concatenar dos cadenas de texto\n");
		printf("5) verificar si una cadena de texto es subcadena de otra\n");
		printf("6) Salir\n");
		printf("Ingresa tu opci�n a elegir: ");
		scanf("%d", &opcion);
		system("cls");

		switch (opcion)
		{
		case 1:
			comparacads();
			getchar();
			system("cls");
			break;
		case 2:
			setbuf(stdin, NULL);
			printf("ingrese una cadena de texto: ");
			fgets(cad, 100, stdin);
			setbuf(stdin, NULL);
			longitud = largo(cad);
			printf("la longitud de la cadena de texto es: %d", longitud);
			getchar();
			system("cls");
			break;
		case 3:
			copiaCad();
			getchar();
			system("cls");
			break;
		case 4:
			concatenaCad();
			getchar();
			system("cls");
			break;
		case 5:
			subCadenas();
			getchar();
			system("cls");
			break;
		case 6:
			break;
		default:
			printf("Opcion incorrecta\n");
			getchar();
			system("cls");
			break;
		}
	} while (opcion != 6);
	return 0;
}
