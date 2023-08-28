#include "lists.h"
/**
 * add_nodeint - adds a node to begining of list
 * @head: head of list
 * @n: integer to add
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next =NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	new->next = (*head)->next;
	*head = new;
	return (new);
}
