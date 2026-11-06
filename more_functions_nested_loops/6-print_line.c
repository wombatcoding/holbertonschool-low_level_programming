#include "main.h"

/**
* print_line - prints _ a number of times = n
* @n: input as an integer
*/

void print_line(int n)
{
	int count;

	count = 0;

	while (count < n)
	{
		_putchar('_');
		++count;
	}
	_putchar('\n');
}
