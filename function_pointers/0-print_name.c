#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - printing name
 *@name: pointer to the name
 *@f: funtion name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
