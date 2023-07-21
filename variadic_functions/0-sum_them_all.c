#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - sum of all parameters
 *@n: constant int value
 *Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list jk;
	unsigned int i;
	int add = 0;

	if (n == 0)
		return (0);

	va_start(jk, n);

	for (i = 0; i < n; i++)

		add += va_arg(jk, int);

	va_end(jk);

	return (add);
}
