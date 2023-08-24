#include "lists.h"
/**
 * add_node_end - adds a new node to end of list
 * @head: head of list
 * @str: string to copy in list
 * Return: pointer to last node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new, *nextP;

	for (i = 0 ; str[i] ; i++)
		;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->str = strdup(str);
	new->len = i;
	if (*head == NULL)
		*head = new;
	else
	{
		nextP = *head;
		while (nextP->next != NULL)
		{
			nextP = nextP->next;
		}
		nextP->next = new;
	}
	return (new);
}
