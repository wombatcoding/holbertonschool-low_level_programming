#include "main.h"

/**
* puts_half - prints the second half of a string
* @str: the string being printed
*/

void puts_half(char *str)
{
	int length;
	int start;
	int count;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		start = (length / 2);
	}
	else
	{
		start = (length - 1) / 2;
	}

	count = start;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
