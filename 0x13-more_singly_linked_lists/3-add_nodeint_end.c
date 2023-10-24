#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end of
 * a listint_t list.
 * @head: pointer to the first node on the list
 * @n: data to insert in that new node
 * Return: 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newnode;

	return (newnode);
}
