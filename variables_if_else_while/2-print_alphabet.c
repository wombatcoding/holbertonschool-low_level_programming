#include <stdio.h>

/**
* main - print the alphabet
*
* Return: always 0 (denoting success in this instance)
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
