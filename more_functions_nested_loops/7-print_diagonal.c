#include "main.h"

/**
* print_diagonal - print a diagonal line created through sequential backslashes
* @n: input as integer to determine length of diagonal
*/

void print_diagonal(int n)
{
	int count;
	int spaces;

	count = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (count < n)
	{
		spaces = 0;

		while (spaces < count)
		{
			_putchar(' ');
			++spaces;
		}
		_putchar('\\');
		_putchar('\n');
		++count;
	}
}
