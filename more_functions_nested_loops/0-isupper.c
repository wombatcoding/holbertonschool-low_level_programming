#include "main.h"

/**
* _isupper - identifies if an input is uppercase or not
* @c: input as integer
*
* Return: 1 indicates uppercase, 0 indicates not uppercase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
