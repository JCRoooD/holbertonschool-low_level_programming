#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *get_dnodeint_at_index - function that returns an indexed node
 *@head: head of elements
 *@index: index of the node
 *Return: index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (x < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		x++;
	}
	return (head);
}
