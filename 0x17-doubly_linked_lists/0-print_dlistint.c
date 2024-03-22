#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of a list
 * @h: the head of the dlistint_t list.
 *
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t k = 0;
	const dlistint_t *tmp = h;

	while (tmp != 0)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		k++;
	}
	return (k);
}
