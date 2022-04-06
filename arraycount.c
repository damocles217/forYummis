#include "arrays.h"

int largo(char cadena[])
{
	int i = 0;
	while (cadena[i] != '\n')
	{
		if (cadena[i] == '\n')
			cadena[i] = '\0';
		i++;
	}
	return (i);
}

int compareStrings(char subString[], char string[], int stringSize, int subStringSize)
{

	int i = 0, j = 0;
	// Checks if subString is into string, returns 1 if true, else 0
	int booleanSubString;

	for (i = 0; j < subStringSize; i++)
	{

		if (string[i] != subString[j])
		{
			booleanSubString = 0;
			j = 0;
		}
		if (string[i] == subString[j])
		{
			booleanSubString = 1;
			j++;
		}
	}

	return booleanSubString;
}