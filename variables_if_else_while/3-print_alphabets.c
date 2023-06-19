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
		putchar (AB);
	for (AB = 'A' ; AB <= 'Z' ; AB++)
		putchar (AB);

	putchar ('\n');
		return (0);
}
