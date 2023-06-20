#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
	{
	char AB;

	for (AB = 'a' ; AB <= 'z' ; AB++)
	{
		if (AB != 'q' && AB != 'e')
		putchar (AB);
	}
	putchar ('\n');
	}
