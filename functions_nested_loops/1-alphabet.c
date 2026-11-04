#include "main.h"

/**
* main - prints _putchar using ascii
*
* Return: always 0 (denoting success in this instance)
*/

void print_alphabet(void);

int main(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		_putchar(lc);
		lc++;
	}

	_putchar('\n');
	return (0);
}
