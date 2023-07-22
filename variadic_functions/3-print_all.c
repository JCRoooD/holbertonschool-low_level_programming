#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: is a list of types of argument passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list std;
	int i = 0, j = 0;
	char *ptr = NULL;

	va_start(std, format);
	while (format && format[j])
		j++;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(std, int));
				break;
			case 'i':
				printf("%d", va_arg(std, int));
				break;
			case 'f':
				printf("%f", va_arg(std, double));
				break;
			case 's':
				ptr = va_arg(std, char *);
				if (ptr == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", ptr);
				break;
			default:
				i++;
				continue;
		}
		if (i != j - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(std);
}
