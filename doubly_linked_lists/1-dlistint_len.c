#include "lists.h"
#include <stdio.h>
/**
 *dlistint_len - function that returns the number of elements
 *@h: head of linked list
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
