#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 *print_dlistint - print all elements of a double linked lists
 *@h: head of the elements
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
