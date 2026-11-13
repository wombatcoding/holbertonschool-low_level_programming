#include <stddef.h>
#include "main.h"

/**
* _strchr - locates a character in a string
* @s: string
* @c: character
*
* Return: pointer to first instance of c, or NULL if no c.
*/

char *_strchr(char *s, char c)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		if (s[count] == c)
		{
			return (&s[count]);
		}
		count++;
	}

	if (c == '\0')
	{
		return (&s[count]);
	}

	return (NULL);
}
