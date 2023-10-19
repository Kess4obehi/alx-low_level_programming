#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: double pointer
 * @str: string to be put in the new node
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head, *newnode;
	unsigned int len = 0;

	while (str[len])
		len++;
	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = newnode;
	return (newnode);
}
