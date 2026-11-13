#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: string
* @accept: string of accepted characters
*
* Return: number of consecutive accepted bytes at the start of s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	unsigned int arrcount;
	int found;

	count = 0;

	while (s[count] != '\0')
	{
		arrcount = 0;
		found = 0;

		while (accept[arrcount] != '\0')
		{
			if (s[count] == accept[arrcount])
			{
				found = 1;
				break;
			}
			arrcount++;
		}

		if (found == 0)
		{
			break;
		}
		count++;
	}

	return (count);
}
