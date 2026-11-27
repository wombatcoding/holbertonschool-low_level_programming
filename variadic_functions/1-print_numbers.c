#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers and a new line
* @separator: string to print between numbers
* @n: number of integers passed to function
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	va_list args;

	va_start(args, n);

	while (count < n)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && count < n - 1)
			printf("%s", separator);
		count++;
	}

	va_end(args);

	printf("\n");
}
