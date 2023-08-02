#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *add_dnodeint - addigng a node at the beginning of a double linked list
 *@head: head of elements
 *@n: number of elements
 *Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = *head;
	n_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = n_node;

	*head = n_node;

	return (n_node);
}
