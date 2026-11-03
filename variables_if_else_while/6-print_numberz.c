#include <stdio.h>

/**
* main - print 0 through 9 using putchar and ascii
*
* Return: always 0 (denoting success in this instance)
*/

int main(void)
{
	int n;

	n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}
