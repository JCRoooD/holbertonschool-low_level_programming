#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{

	int x;

	for (x = 48; x < 58; x++)
	{
	putchar (x);
	if (x < 57)
	printf("combination for all single digits", x);
	}

	putchar (44);
		putchar(32);
		putchar('\n');
		return (0);
}
