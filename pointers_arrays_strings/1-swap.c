#include <main.h>

/**
* swap_int - swaps the values of integers a and b
* @a: integer a
* @b: integer b
*/

void swap_int(int *a, int *b)
{

	int tempint;

	tempint = *a;
	*a = *b;
	*b = tempint;
}
