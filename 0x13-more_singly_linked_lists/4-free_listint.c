#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list.
 * @head: listint_t list to be freed
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
