#include "main.h"

/**
* _atoi - converts a string to an integer.
* @s: string to be converted
*
* Return: the converted integer
*/

int _atoi(char *s)
{
	int count;
	int sign;
	int result;

	count = 0;
	sign = 1;
	result = 0;

	while (s[count] != '\0' &&
	       (s[count] < '0' || s[count] > '9'))
	{
		if (s[count] == '-')
		{
			sign = sign * -1;
		}
		count++;
	}

	while (s[count] >= '0' && s[count] <= '9')
	{
		result = result * 10 - (s[count] - '0');
		count++;
	}

	if (sign == 1)
	{
		return (-result);
	}
	else
	{
		return (result);
	}
}
