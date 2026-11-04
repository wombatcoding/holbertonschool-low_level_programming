#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet 10 times
*/

void print_alphabet_x10(void)
{
	char lc;
	int count;

	count = 0;

	while (count < 10)
	{
		lc = 'a';
		while (lc <= 'z')
		{
			_putchar(lc);
			lc++;
		}
		_putchar('\n');
		count++;
	}
}
