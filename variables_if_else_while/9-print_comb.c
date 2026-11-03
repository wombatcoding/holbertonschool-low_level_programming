#include <stdio.h>

/**
* main - putchar 0 to 9 separated by comma & space using ascii
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

		if (n < 57)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}

	putchar('\n');
	return (0);
}
