#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the
 * beginning of a listint_t list.
 * @head: pointer to the first node in the list
 * @n: data to insert in tha new node
 * Return: 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == 0)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
