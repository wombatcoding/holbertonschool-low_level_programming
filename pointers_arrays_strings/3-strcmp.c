#include "main.h"

/**
* _strcmp - compares two strings
* @s1: string 1
* @s2: string 2
*
* Return: integer that is either > 0, == 0, or < 0
*/

int _strcmp(char *s1, char *s2)
{
	int diff;
	int count;

	diff = 0;
	count = 0;

	while (s1[count] != '\0' && s2[count] != '\0')
	{
		if (s1[count] < s2[count])
		{
			diff = s1[count] - s2[count];
			break;
		}
		else if (s1[count] > s2[count])
		{
			diff = s1[count] - s2[count];
			break;
		}
		else
		{
			diff = 0;
		}
		count++;
	}

	if (diff == 0)
	{
		diff = (unsigned char)s1[count] -
			(unsigned char)s2[count];
	}

	return (diff);
}
