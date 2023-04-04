#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - adds up the elements of every node
 * @head: first node
 * Return: Sum of all the elements
 */

int sum_listint(listint_t *head)
{
	listint_t *checker_node = head;
	int sum = 0;

	while (checker_node != NULL)
	{
		sum = sum + checker_node->n;
		checker_node = checker_node->next;
	}

	return (sum);
}
