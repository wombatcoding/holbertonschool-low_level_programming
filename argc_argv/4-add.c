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
	int count = 1;
	int total = 0;
	int index;

	while (count < argc)
	{
		index = 0;

		while (argv[count][index] != '\0')
		{
			if (argv[count][index] < '0' || argv[count][index] > '9')
			{
				printf("Error\n");
				return (1);
			}
			index++;
		}
		total += atoi(argv[count]);
		count++;
	}

	printf("%d\n", total);

	return (0);
}
