#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - print strings with a defined separator
* @separator: printed between the strings
* @n: number of strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	char *str;
	va_list args;

	va_start(args, n);

	while (count < n)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && count < n - 1)
			printf("%s", separator);
		count++;
	}

	va_end(args);

	printf("\n");
}
