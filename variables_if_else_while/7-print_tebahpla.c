#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
	char AB;

	for (AB = 'z' ; AB >= 'a' ; AB--)
		putchar (AB);

putchar ('\n');
	return (0);
}
