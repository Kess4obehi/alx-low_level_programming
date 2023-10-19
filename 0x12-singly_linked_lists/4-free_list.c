#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to be freed
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
