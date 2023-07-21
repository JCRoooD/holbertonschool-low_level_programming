#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - function that prints numbers
 *@separator: character that will appear between each integer
 *@n: number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pass;

	va_start(pass, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pass, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(pass);

	printf("\n");
}
