#include "main.h"

/**
* _memcpy - copies n bytes from mem area src to mem area dest
* @dest: destination memory area
* @src: source memory area
* @n: number of bytes to be copied
*
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
