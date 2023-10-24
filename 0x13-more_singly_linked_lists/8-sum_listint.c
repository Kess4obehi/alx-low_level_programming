#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to the head of the linked list
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
