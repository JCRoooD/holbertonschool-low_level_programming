#include "lists.h"
/**
 *sum_dlistint - function that sums all the data in linked list
 *@head: head of elements
 *Return: sum of date
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
