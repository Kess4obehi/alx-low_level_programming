#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node
 * at a given position.
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node will be added
 * @n: value for the new node to be added
 * Return: 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = temp;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; temp != NULL; i++)
	{
		if (i == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		temp = temp->next;
	}
	return (NULL);
}
