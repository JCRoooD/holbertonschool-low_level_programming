#include "lists.h"
#include <stdio.h>
/**
 *list_len - function that returns the number of elements
 *@h: head of linked list
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
