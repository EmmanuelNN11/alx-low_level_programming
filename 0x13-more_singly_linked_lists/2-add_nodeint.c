#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new new node at the beginning of a list
 * @head: the first node
 * @n: value to be assigned to to the node
 * Return: Address of new node or NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh_node;

	if (head == NULL)
	{
		return (NULL);
	}

	fresh_node = malloc(sizeof(listint_t));

	if (fresh_node == NULL)
	{
		return (NULL);
	}

	fresh_node->n = n;
	fresh_node->next = *head;
	*head = fresh_node;

	return (fresh_node);
}
