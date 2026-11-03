#include <stdio.h>

/**
* main - print the alphabet excluding e and q
*
* Return: always 0 (denoting success in this instance)
*/

int main(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		if (lc != 'e' && lc != 'q')
		{
			putchar(lc);
			lc++;
		}
	}

	putchar('\n');
	return (0);
}
