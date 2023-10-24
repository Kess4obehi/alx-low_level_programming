#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of
 * a listint_t linked list.
 * @head: pointer to the head of the linked list
 * @index: index of the node to find
 * Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}

	return (NULL);
}
