#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to the list_t list to print
 * Return: the number of node printed
 */

size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}
	return (num);
}
