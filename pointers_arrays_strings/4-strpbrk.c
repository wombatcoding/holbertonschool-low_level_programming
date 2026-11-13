#include <stddef.h>
#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string
* @accept: string of accepted characters
*
* Return: pointer to first accepted byte, or NULL if none
*/

char *_strpbrk(char *s, char *accept)
{
	int count;
	int arrcount;

	count = 0;

	while (s[count] != '\0')
	{
		arrcount = 0;

		while (accept[arrcount] != '\0')
		{
			if (s[count] == accept[arrcount])
			{
				return (&s[count]);
			}
			arrcount++;
		}
		count++;
	}

	return (NULL);
}
