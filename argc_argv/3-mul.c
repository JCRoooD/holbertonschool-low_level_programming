#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *main - multiplying two numbers
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int mult;

		mult = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mult);
	}
	return (0);
}
