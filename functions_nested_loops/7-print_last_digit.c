#include "main.h"

/**
* print_last_digit - prints the last digit of n as a positive integer
* @n: input as integer
*
* Return: n where n is the output of the last digit
*/


int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = -last;
	}

	_putchar('0' + last);
	return (last);
}
