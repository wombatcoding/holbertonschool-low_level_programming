#include <stdio.h>

/**
* main - print the hexadecimal/base16 in lowercase
*
* Return: always 0 (denoting success in this instance)
*/

int main(void)
{
	char n;
	char lc;

	n = '0';
	lc = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (lc <= 'f')
	{
		putchar(lc);
		lc++;
	}

	putchar('\n');
	return (0);
}
