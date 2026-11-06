#include "main.h"

/**
* _isdigit - identifies if an input is a digit or not
* @c: input as integer
*
* Return: 1 indicates digit, 0 indicates not a digit
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
