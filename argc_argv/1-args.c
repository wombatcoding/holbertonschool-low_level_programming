#include <stdio.h>
#include "main.h"

/**
* main - primary function
* @argc: number of command line arguments
* @argv: pointer to array of arguments
*
* Return: Always 0 to indicate success
*/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
