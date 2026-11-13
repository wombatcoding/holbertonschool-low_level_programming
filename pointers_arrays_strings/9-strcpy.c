#include "main.h"

/**
* _strcpy - copies string src to dest buffer.
* @dest: a buffer array
* @src: source array
*
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int count;

	count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}

	if (src[count] == '\0')
	{
		dest[count] = '\0';
	}
	return (dest);
}
