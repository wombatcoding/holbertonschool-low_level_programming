#include <stdio.h>

/**
* main - print the alphabet
*
* Return: always 0 (denoting success in this instance)
*/

int main(void)
{
	char lc = 'a';
	char uc = 'A';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}

	putchar('\n');
	return (0);
}
