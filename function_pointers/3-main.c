#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - calculator program
* @argc: number of arguments
* @argv: pointer to argument strings
*
* Return: 0 on program completion.
*/

int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*operation)(a, b));
	return (0);
}
