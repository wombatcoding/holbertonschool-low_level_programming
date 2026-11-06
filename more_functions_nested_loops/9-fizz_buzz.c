#include <stdio.h>

/**
* main - print the fizz buzz test
*
* Return: 0 to indicate success
*/

int main(void)
{
	int n;

	n = 1;

	while (n <= 100)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n <= 99)
		{
			printf(" ");
		}
		++n;
	}
	printf("\n");
	return (0);
}
