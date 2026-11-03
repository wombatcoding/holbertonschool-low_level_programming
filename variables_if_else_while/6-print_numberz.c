#include <stdio.h>

/**
* main - print 0 through 9
*
* Return: always 0 (denoting success in this instance)
*/

int main(void)
{
	int n;

	n = 0;

	while (n <= 9)
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}
