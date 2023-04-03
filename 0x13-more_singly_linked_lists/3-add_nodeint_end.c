#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * add_nodeint_end - adds a node to the end of the list
 * @head: first node
 * @n: value for the last node
 * Return: new address of the last node or NULL if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node;
	listint_t *x;


	if (head == NULL)
	{
		return (NULL);
	}

	last_node = malloc(sizeof(listint_t));
	if (last_node == NULL)
	{
		return (NULL);
	}

	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}

	else
	{
	x = *head;
	while (x->next != NULL)
	{
		x = x->next;
	}

	x->next = last_node;
	}

	return (last_node);
}
