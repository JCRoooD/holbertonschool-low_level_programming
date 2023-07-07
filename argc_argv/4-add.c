#include <stdio.h>
#include <stdlib.h>
/**
 *main - adding numbers
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0 if no nummber otherwise 1 if there is a char
 */
int main(int argc, char *argv[])
{
	int i, a;

	for (i = 1; i < argc; i++)
	{
		a += atoi(argv[i]);

		if (a == 199)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", a);
	return (0);
}
