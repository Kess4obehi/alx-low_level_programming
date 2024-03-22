#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of a list
 * @h: the head of the list
 *
 * Return: the number of element in the list
 * Description: This function returns the number of elements in a dlistint_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t k = 0;
	const dlistint_t *tmp = h;

	while (tmp != 0)
	{
		tmp = tmp->next;
		k++;
	}
	return (k);
}
