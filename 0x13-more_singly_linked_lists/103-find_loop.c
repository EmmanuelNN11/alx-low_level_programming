#include "lists.h"
#include <stdio.h>
#include <stdio.h>


/**
 * find_listint_loop - finds the loop in the list
 * @head: first node
 * Return: address of the node or NULL if fail
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x = head;
	listint_t *y = head;

	if (!head)
		return (NULL);

	while (x && y && y->next)
	{
	y = y->next->next;
	y = y->next;
	if (y == x)
	{
		x = head;
		while (x != y)
		{
			x = x->next;
			y = y->next;
		}
		return (y);
	}
	}

	return (NULL);
}

