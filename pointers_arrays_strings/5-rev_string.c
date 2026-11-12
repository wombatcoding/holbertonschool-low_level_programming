#include "main.h"

/**
* rev_string - reverses a string
* @s: the string being reversed
*/

void rev_string(char *s)
{
	char *fwd;
	char *rev;
	char temp;

	fwd = s;
	rev = s;

	if (*s == '\0')
	{
		return;
	}
	else
	{
		while (*rev != '\0')
		{
			rev++;
		}

		rev--;
	}

	while (fwd < rev)
	{
		temp = *fwd;
		*fwd = *rev;
		*rev = temp;
		fwd++;
		rev--;
	}
}
