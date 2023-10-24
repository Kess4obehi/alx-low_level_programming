#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to the linked list
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp = *head;

	if (temp == NULL)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
