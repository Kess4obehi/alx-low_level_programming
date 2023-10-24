#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t linked list.
 * @head: pointer to the first list
 * Return: 0
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *currentnode, *nextnode;

	prevnode = NULL;
	currentnode = nextnode = *head;

	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		currentnode->next = prevnode;
		prevnode = currentnode;
		currentnode = nextnode;
	}

	*head = prevnode;
	return (*head);
}
