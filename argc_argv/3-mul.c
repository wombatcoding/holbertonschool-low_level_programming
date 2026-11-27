#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - primary function
* @argc: number of command line arguments
* @argv: pointer to array of arguments
*
* Return: 0 for success, 1 for error.
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
