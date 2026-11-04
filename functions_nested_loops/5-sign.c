#include "main.h"

/**
* print_sign - identifies if an input is a positive or negative number
* @n: input as integer
*
* Return: 1 equals positive sign, -1 equals negative sign, 0 indicates neither
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
