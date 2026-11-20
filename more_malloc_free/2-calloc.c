#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: number of elements
* @size: size of elements
*
* Return: pointer to newly allocated space in memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arraymem;
	unsigned int init = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arraymem = malloc(nmemb * size);

	if (arraymem == NULL)
		return (NULL);

	while (init < nmemb * size)
	{
		arraymem[init] = 0;
		init++;
	}
	return (arraymem);
}
