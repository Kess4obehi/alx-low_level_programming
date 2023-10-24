#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *nextnode, *temp = *head;

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || (!temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);
	return (1);
}
