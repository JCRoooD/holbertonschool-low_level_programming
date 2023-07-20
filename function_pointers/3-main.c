#include "calc.h"
#include <stdlib.h>
/**
 *main - main function
 *@argc: argument counter
 *@argv: argument vector
 *Return: function that would do the operation of the function get_up
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98)
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if (get_up_func(argv[2], (n1, n2)) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2] == / || argv[2] == % &&n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (printf("%d\n", get_up_func(argv[2], (n1, n2))));
}
