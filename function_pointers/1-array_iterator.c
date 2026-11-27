#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - function to progress through an array
* @array: array to be progressed
* @size: elements in the array
* @action: function to execute on each element
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t arrcnt = 0;

	if (array == NULL)
		return;

	if (action == NULL)
		return;

	while (arrcnt < size)
	{
		(*action)(array[arrcnt]);
		arrcnt++;
	}
}
