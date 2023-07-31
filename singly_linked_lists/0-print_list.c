#include "lists.h"
#include <stdio.h>
/**
 *print_list - function to print all linked list elements
 *@h: head of linked list
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
		number++;
	}
	return (number);
}
