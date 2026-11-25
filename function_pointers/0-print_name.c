#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - function to have a program print a name
* @name: the source for the name
* @f: function used to print the name
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;

	(*f)(name);
}
