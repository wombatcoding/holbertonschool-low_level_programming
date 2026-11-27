#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - prints anything
* @format: list of arguments
*/

void print_all(const char * const format, ...)
{
	unsigned int count = 0;
	char *str;
	char *separator = "";
	va_list args;

	va_start(args, format);

	while (format != NULL && format[count] != '\0')
	{
		switch (format[count])
		{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
			separator = ", ";
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			separator = ", ";
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			separator = ", ";
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
			separator = ", ";
			break;
		}
		count++;
	}
	va_end(args);
	printf("\n");
}
