#include "main.h"

/**
* _isalpha - identifies if an input is an alphabetic character or not
* @c: input as integer
*
* Return: 1 indicates alphabet character, 0 indicates not
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
