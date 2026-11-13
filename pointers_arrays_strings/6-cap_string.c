#include "main.h"

/**
* cap_string - capitalises all words of a string
* @str: string to convert
*
* Return: pointer to converted string
*/

char *cap_string(char *str)
{
	int count;
	int new_word;

	count = 0;
	new_word = 1;

	while (str[count] != '\0')
	{
		if (str[count] == ' ' || str[count] == '\t' ||
			str[count] == '\n' || str[count] == ',' ||
			str[count] == ';' || str[count] == '.' ||
			str[count] == '!' || str[count] == '?' ||
			str[count] == '"' || str[count] == '(' ||
			str[count] == ')' || str[count] == '{' ||
			str[count] == '}')
		{
			new_word = 1;
		}
		else
		{
			if (str[count] >= 'a' && str[count] <= 'z'
				&& new_word == 1)
			{
				str[count] = str[count] - 32;
			}
			new_word = 0;
		}
		count++;
	}

	return (str);
}
