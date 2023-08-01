#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_list - function that frees list_t
 *@head: start of elements in linked lists
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);
	free(head->str);
	free(head);
}
