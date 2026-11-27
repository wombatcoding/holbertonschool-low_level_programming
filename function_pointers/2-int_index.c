#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - function that searches an array for an integer.
* @array: array to be examined
* @size: elements in the array
* @cmp: function to compare values
*
* Return: index of first matching element, or -1 on failure
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int arrcnt = 0;

	if (array == NULL)
		return (-1);

	if (cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	while (arrcnt < size)
	{
		if ((*cmp)(array[arrcnt]) != 0)
			return (arrcnt);
		arrcnt++;
	}
	return (-1);
}
