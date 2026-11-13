#include "main.h"

/**
* _strcat - appends the src string to the dest string
* @dest: destination string
* @src: source string to be appended to dest
*
* Return: a pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	int dest_count;
	int src_count;

	dest_count = 0;
	src_count = 0;

	while (dest[dest_count] != '\0')
	{
		dest_count++;
	}
	while (src[src_count] != '\0')
	{
		dest[dest_count] = src[src_count];
		dest_count++;
		src_count++;
	}

	dest[dest_count] = '\0';

	return (dest);
}
