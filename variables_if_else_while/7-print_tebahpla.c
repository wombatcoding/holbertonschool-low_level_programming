#include <stdio.h>

/**
* main - print the alphabet in reverse
*
* Return: always 0 (denoting success in this instance)
*/

int main(void)
{
	int lc;

	lc = 'z';

	while (lc >= 'a')
	{
		putchar(lc);
		lc--;
	}

	putchar('\n');
	return (0);
}
