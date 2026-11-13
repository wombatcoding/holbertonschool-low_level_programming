#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: memory area
* @b: constant byte
* @n: number of bytes to be filled by b
*
* Return: pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}
