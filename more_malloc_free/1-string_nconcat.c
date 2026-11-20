#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenates two strings.
* @s1: string 1
* @s2: string 2
* @n: max length of s2
*
* Return: newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *catstr;
	unsigned int count1 = 0, count2 = 0, copy = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[count1] != '\0')
	{
		count1++;
	}
	while (s2[count2] != '\0' && count2 < n)
	{
		count2++;
	}

	catstr = malloc((count1 + count2 + 1) * sizeof(char));

	if (catstr == NULL)
		return (NULL);
	while (copy < count1)
	{
		catstr[copy] = s1[copy];
		copy++;
	}
	copy = 0;
	while (copy < count2)
	{
		catstr[count1 + copy] = s2[copy];
		copy++;
	}
	catstr[count1 + count2] = '\0';
	return (catstr);
}
