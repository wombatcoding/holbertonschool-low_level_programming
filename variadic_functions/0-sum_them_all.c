#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - sums a variable number of integers
* @n: number of integers
*
* Return: sum of the integers
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count = 0;
	int total = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (count < n)
	{
		total += va_arg(args, int);
		count++;
	}

	va_end(args);

	return (total);
}
