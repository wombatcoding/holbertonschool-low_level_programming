#include "main.h"

/**
* _strncpy - copies the src string to the dest string
* @dest: destination string
* @src: source string to be copied to dest
* @n: max number of characters to copy
*
* Return: a pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	count = 0;

	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
