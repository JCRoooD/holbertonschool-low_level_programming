#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *free_dlistint - function that frees double linked list
 *@head: head of elements
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	free_dlistint(head->next);
	free(head);
}
