#include <stdio.h>
#include "main.h"

/**
* print_array - prints elements of an array
* @a: the array
* @n: number of elements in the array to print
*/

void print_array(int *a, int n)
{
	int count;

	count = 0;

	while (count < n)
	{
		if (count == n - 1)
		{
			printf("%d", a[count]);
		}
		else
		{
			printf("%d, ", a[count]);
		}
		count++;
	}
	printf("\n");
}
