#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - prints out the number of elements
 * @h: pointer to the linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
	counter++;
	h = h->next;
	}
	return (counter);
}
