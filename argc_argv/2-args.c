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
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
