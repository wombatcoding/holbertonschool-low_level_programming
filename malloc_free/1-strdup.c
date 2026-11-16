#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
* _strdup - duplicates a string using allocated memory
* @str: string
*
* Return: pointer to the array, or NULL if failed
*/

char *_strdup(char *str)
{
	char *new;
	int copy;
	int count;
	int strlen;

	copy = 0;
	count = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[count] != '\0')
	{
		count++;
	}

	strlen = count;

	new = malloc((strlen + 1) * sizeof(char));

	if (new == NULL)
	{
		return (NULL);
	}

	while (copy <= strlen)
	{
		new[copy] = str[copy];
		copy++;
	}

	return (new);
}
