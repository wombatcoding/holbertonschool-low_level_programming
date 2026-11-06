#include "main.h"

/**
* print_triangle - print a right-aligned triangle
* @size: designates the height of the triangle
*/

void print_triangle(int size)
{
	int rows;
	int spaces;
	int hashes;

	rows = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (rows < size) /* outer loop: rows */
	{
		spaces = 0;
		hashes = 0;

		while (spaces < size - rows - 1) /* inner loop1 spaces */
		{
			_putchar(' ');
			++spaces;
		}
		while (hashes < rows + 1) /* inner loop2 hashes */
		{
			_putchar('#');
			++hashes;
		}
		_putchar('\n');
		++rows;
	}
}
