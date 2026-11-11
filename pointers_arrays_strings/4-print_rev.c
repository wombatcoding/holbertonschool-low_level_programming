#include "main.h"

/**
* print_rev - prints a string, in reverse
* @s: the string being printed
*/

void print_rev(char *s)
{
	char *start;

	start = &s[0];

	if (*s == '\0')
	{
	}
	else
	{
		while (*s != '\0')
		{
			s++;
		}

		s--;

		while (s >= start)
		{
			if (s == start)
			{
				_putchar(*s);
				break;
			}
			else
			{
				_putchar(*s);
				s--;
			}
		}
	}
	_putchar('\n');
}
