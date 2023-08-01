#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 *add_node - function that will add a node to start of linked list
 *@head: pointer to start
 *@str: pointer to string
 *Return:  the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	n_node = malloc(sizeof(list_t));

	/* Check if the string is NULL. If it is, return NULL. */
	if (str == NULL)
		return (NULL);

	/* Check if the new node is NULL. If it is, return NULL. */
	if (n_node == NULL)
		return (NULL);

	/* Duplicate the string. */
	n_node->str = strdup(str);

	/* check if n_node is NULL. otherwise free the n_node and return NULL. */
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}

	/* Set the new node's length. */
	n_node->len = strlen(str);

	/* Set the new node's next pointer to the head of the list. */
	n_node->next = *head;

	/* Set the head of the list to the new node. */
	*head = n_node;

	return (n_node);
}
