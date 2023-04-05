#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - this cond prints out a linked list
 * @head: first node
 * Return: number of nodes or status 98 if fail
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *x = head;
	const listint_t *y = head;

	if (head == NULL)
		exit(98);

	while (x != NULL && y != NULL && y->next != NULL)
	{
		printf("[%p] %d\n", (void *)x, x->n);

		x = x->next;
		y = y->next->next;

		if (x == y)
		{
			x = head;
		while (x != y)
		{
			printf("[%p] %d\n", (void *)x, x->n);

			x = x->next;
			y = y->next;

		}

		exit(98);
		}
		counter++;
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);

		head = head->next;
		counter++;
	}

	return (counter);
}
