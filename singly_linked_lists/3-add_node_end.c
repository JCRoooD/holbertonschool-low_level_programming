#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 *add_node_end - function that will add a node to start of linked list
 *@head: pointer to start
 *@str: pointer to string
 *Return:  the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *temp;

	n_node = malloc(sizeof(list_t));

	if (str == NULL || n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	n_node->len = strlen(str);

	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
	}

	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = n_node;
	}
	return (n_node);
}
