#include "arrays.h"

void comparacads()
{
	int i, igual, largo1, largo2;
	char cade1[100], cade2[100];

	setbuf(stdin, NULL);

	printf("dame dos cadenas de caracteres\n");

	printf("Dame la primer cadena: \n");
	fgets(cade1, 100, stdin);
	setbuf(stdin, NULL);

	printf("Dame la segunda cadena: \n");
	fgets(cade2, 100, stdin);
	setbuf(stdin, NULL);

	largo1 = largo(cade1);
	largo2 = largo(cade2);
	if (largo1 == largo2)
	{
		for (i = 0; i < largo1; i++)
		{
			if (cade1[i] != cade2[i])
			{
				igual = 0;
			}
			else
			{
				igual = 1;
			}
		}
		if (igual == 1)
		{
			printf("son iguales");
		}
		else
		{
			printf("No son iguales pero tienen el mismo tama�o");
		}
	}
	else
	{
		if (largo1 > largo2)
		{
			printf("la primer cadena es m�s larga");
		}
		else
		{
			printf("la segunda cadena es mas larga");
		}
	}
	return;
}

void copiaCad()
{
	char cad1[100], cad2[100];
	int i, largo1;
	printf("ingrese dos cadenas, considere que se copiar� la segunda en la primera\n");
	setbuf(stdin, NULL);

	printf("Ingresa la cadena a copiar: \n");
	fgets(cad1, 100, stdin);
	setbuf(stdin, NULL);

	largo1 = largo(cad1);
	for (i = 0; i <= largo1; i++)
	{
		cad2[i] = cad1[i];
	}
	printf("Estan son las nuevas cadenas: \n");
	printf("%s", cad1);
	printf("%s", cad2);
	return;
}

void concatenaCad()
{
	char cad1[1000], cad2[1000];
	int largo1, largo2, i;

	setbuf(stdin, NULL);
	printf("ingrese dos cadenas\n");
	printf("Ingresa la primer cadena\n");
	fgets(cad1, 100, stdin);

	setbuf(stdin, NULL);
	printf("Ingresa la segunda cadena\n");
	fgets(cad2, 100, stdin);
	setbuf(stdin, NULL);

	largo1 = largo(cad1);
	largo2 = largo(cad2);
	for (i = 0; i <= largo2; i++)
	{
		cad1[largo1 + i] = cad2[i];
	}
	printf("%s", cad1);
}

void subCadenas()
{
	char subString[100];
	char string[100];
	int stringSize, subStringSize;

	setbuf(stdin, NULL);
	printf("Introduzca la cadena principal (maximo 50 caracteres): \n");
	fgets(string, 100, stdin);
	setbuf(stdin, NULL);
	printf("Introduzca la cadena secundaria (maximo 50 caracteres): \n");
	fgets(subString, 100, stdin);

	stringSize = largo(string);
	subStringSize = largo(subString);

	if (compareStrings(subString, string, stringSize, subStringSize) == 1)
	{
		printf("%s esta dentro de la cadena '%s' ", subString, string);
	}
	else
	{
		printf("%s NO esta dentro de la cadena '%s' ", subString, string);
	}

	setbuf(stdin, NULL);
}
