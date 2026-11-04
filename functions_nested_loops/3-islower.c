#include "main.h"

/**
* _islower - identifies if an input is lowercase or not
* @c: input as integer
*
* Return: 1 indicates lowercase, 0 indicates not lowercase
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
