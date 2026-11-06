#include "main.h"

/**
* more_numbers - prints 0 through 14, 10 times.
*/

void more_numbers(void)
{
	int n;
	int c;

	c = 0;

	while (c < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n >= 10)
			{
				_putchar('0' + n / 10);
			}
			_putchar('0' + n % 10);
			++n;
		}
		_putchar('\n');
		++c;
	}
}
