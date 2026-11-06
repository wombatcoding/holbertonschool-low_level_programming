#include "main.h"

/**
* print_numbers - prints 0 through 9 using putchar and ascii
*/

void print_numbers(void)
{
	int n;

	n = 48;

	while (n <= 57)
	{
		_putchar(n);
		n++;
	}

	_putchar('\n');
}
