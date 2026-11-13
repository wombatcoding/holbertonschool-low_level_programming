#include "main.h"

/**
* string_toupper - converts lowercase to uppercase
* @str: string to convert
*
* Return: pointer to converted string
*/

char *string_toupper(char *str)
{
	int count;

	count = 0;

	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] = str[count] - 32;
		}
		count++;
	}

	return (str);
}
