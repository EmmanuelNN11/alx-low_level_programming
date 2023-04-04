#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a specific index
 * @index: index
 * @head: first node
 * Return: 1 if success -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *checker_node;
	listint_t *x;
	unsigned int a;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
		return (1);
	}
	checker_node = *head;

	for (a = 0; a < index - 1; a++)
	{
		if (checker_node == NULL || checker_node == NULL)
			return (-1);

		checker_node = checker_node->next;
	}

	x = checker_node->next;
	checker_node->next = x->next;
	free(x);

	return (1);

}

