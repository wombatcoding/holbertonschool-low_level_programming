#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatenates two strings.
* @s1: string 1
* @s2: string 2
*
* Return: pointer to the array, or NULL if failed
*/

char *str_concat(char *s1, char *s2)
{
	char *catstr;
	int count1, count2, copy = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[count1] != '\0')
	{
		count1++;
	}
	while (s2[count2] != '\0')
	{
		count2++;
	}

	catstr = malloc((count1 + count2 + 1) * sizeof(char));

	if (catstr == NULL)
	{
		return (NULL);
	}
	while (copy < count1)
	{
		catstr[copy] = s1[copy];
		copy++;
	}
	copy = 0;
	while (copy <= count2)
	{
		catstr[count1 + copy] = s2[copy];
		copy++;
	}

	return (catstr);
}
