#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at a specific index
 * @idx: the index
 * @head: first node
 * @n: value of the data to be stored in the new node
 * Return: Address of node or NULL if failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *fresh_node;
	listint_t *checker_node;
	unsigned int x;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
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
	fresh_node = malloc(sizeof(listint_t));
	if (fresh_node == NULL)
	{
		return  (NULL);
	}
	fresh_node->n = n;
	checker_node = *head;
	for (x = 0; x < idx - 1 && checker_node != NULL; x++)
	{
		checker_node = checker_node->next;
	}
	if (checker_node == NULL)
	{
		free(fresh_node);
		return (NULL);
	}
	fresh_node->next = checker_node->next;
	checker_node->next = fresh_node;
	return (fresh_node);
}
