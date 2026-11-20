#include <stdlib.h>
#include "main.h"

/**
* array_range - creates an array of integers
* @min: minimum value
* @max: maximum value
*
* Return: pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *array;
	int count = 0;

	if (min > max)
		return (NULL);

	array = malloc(((max - min) + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	while (count < ((max - min) + 1))
	{
		array[count] = min + count;
		count++;
	}

	return (array);
}
