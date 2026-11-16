#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
* create_array - creates array of chars and initialises with a specific char
* @size: size of array
* @c: initial char
*
* Return: pointer to the array, or NULL if failed
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int init;

	init = 0;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	while (init < size)
	{
		array[init] = c;
		init++;
	}

	return (array);
}
