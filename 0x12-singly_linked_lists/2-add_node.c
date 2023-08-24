#include "lists.h"
/**
 * add_node - adds a node to the begining of the list
 * @head: head of the list
 * @str: string to copy into list
 * Return: pointer to new head
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new;

	for (i = 0 ; str[i] ; i++)
		;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->next = *head;
	new->str = strdup(str);
	new->len = i;
	*head = new;
	return (*head);
}
