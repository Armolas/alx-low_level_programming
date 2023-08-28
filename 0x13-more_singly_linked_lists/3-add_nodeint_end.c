#include "lists.h"
/**
 * add_nodeint_end - adds a new element to the list
 * @head: head of the list
 * @n: integer to be stored in the list
 * Return: pointer to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *currentList;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	currentList = *head;
	while (currentList->next)
	{
		currentList = currentList->next;
	}
	currentList->next = new;
	return (new);
}
