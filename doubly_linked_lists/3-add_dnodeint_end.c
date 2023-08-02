#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *add_dnodeint_end - add node at the end of the function
 *@head: head of elements
 *@n: number of elements
 *Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node;
	dlistint_t *temp;

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		n_node->prev = NULL;
		return (n_node);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	
	temp->next = n_node;
	n_node->prev = temp;
	}
	return (n_node);
}
