#include "main.h"

/**
* times_table - prints the 9 times table
*/

void times_table(void)
{
	int col;
	int row;
	int mult;

	col = 0;

	while (col < 10)
	{
		row = 0;
		while (row < 10)
		{
			mult = col * row;

			if (row > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (mult < 10)
			{
				if (row > 0)
				{
					_putchar(' ');
				}
				_putchar('0' + mult);
			}
			else
			{
				_putchar('0' + mult / 10);
				_putchar('0' + mult % 10);
			}
			++row;
		}
		++col;
		_putchar('\n');
	}
}
