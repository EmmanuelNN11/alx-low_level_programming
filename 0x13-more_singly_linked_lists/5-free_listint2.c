#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees the memory of a list
 * @head: first node in the list
 */

void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (*head)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}
	*head = NULL;
}
