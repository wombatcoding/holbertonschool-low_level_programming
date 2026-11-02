#include <stdio.h>
#include <stddef.h>

/**
* main - starts the program to print formatted text to output
*
* Return: confirms the integer output to complete the program
*/

int main(void)
{
	size_t c = sizeof(char);
	size_t i = sizeof(int);
	size_t li = sizeof(long int);
	size_t lli = sizeof(long long int);
	size_t f = sizeof(float);

	printf("Size of a char: %zu byte(s)\n"
	"Size of an int: %zu byte(s)\n"
	"Size of a long int: %zu byte(s)\n"
	"Size of a long long int: %zu byte(s)\n"
	"Size of a float: %zu byte(s)\n", c, i, li, lli, f);

	return (0);
}
