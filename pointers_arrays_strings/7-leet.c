#include "main.h"

/**
* leet - converts a string to 1337
* @str: string to convert
*
* Return: pointer to converted string
*/

char *leet(char *str)
{
	int strcount;
	int arrcount;
	char noobarr[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leetarr[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	strcount = 0;

	while (str[strcount] != '\0')
	{
		arrcount = 0;

		while (arrcount < 10)
		{
			if (str[strcount] == noobarr[arrcount])
			{
				str[strcount] = leetarr[arrcount];
			}
			arrcount++;
		}
		strcount++;
	}

	return (str);
}
