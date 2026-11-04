#include "main.h"

/**
* print_alphabet - prints alphabet using _putchar
*/

void print_alphabet(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		_putchar(lc);
		lc++;
	}

	_putchar('\n');
}
