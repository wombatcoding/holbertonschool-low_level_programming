#include <stddef.h>
#include "main.h"

/**
* _strstr - locates a substring
* @haystack: string
* @needle: substring
*
* Return: pointer to beginning of located substring, or NULL if none
*/

char *_strstr(char *haystack, char *needle)
{
	int count;
	int arrcount;

	count = 0;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	while (haystack[count] != '\0')
	{
		arrcount = 0;

		while (needle[arrcount] != '\0' &&
			haystack[count + arrcount] != '\0')
		{
			if (haystack[count + arrcount] != needle[arrcount])
			{
				break;
			}
			arrcount++;
		}

		if (needle[arrcount] == '\0')
		{
			return (&haystack[count]);
		}
		count++;
	}

	return (NULL);
}
