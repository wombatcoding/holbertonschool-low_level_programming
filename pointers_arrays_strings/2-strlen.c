#include "main.h"

/**
* _strlen - returns the length of a string
* @s: the string being evaluated
*
* Return: the length of the string
*/

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	return (count);
}
