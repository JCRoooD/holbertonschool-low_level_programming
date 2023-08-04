#include "lists.h"
#include <stdio.h>
/**
 *insert_dnodeint_at_index - inserting a new node at a given position
 *@h: head of elements
 *@idx: index of list to add
 *@n: data received
 *Return: address of new node otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *n_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		tmp = tmp->next;

		if (tmp == NULL)
			return (NULL);
		idx--;
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = tmp;
	n_node->next = tmp->next;
	tmp->next->prev = n_node;
	tmp->next = n_node;

	return (n_node);
}
