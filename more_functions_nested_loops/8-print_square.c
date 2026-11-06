#include "main.h"

/**
* print_square - print a square using the hash symbol
* @size: input as integer to determine dimensions of the square
*/

void print_square(int size)
{
	int cx;
	int cy;

	cx = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (cx < size)
	{

		cy = 0;

		while (cy < size)
		{
			_putchar('#');
			++cy;
		}

		_putchar('\n');
		++cx;
	}
}
