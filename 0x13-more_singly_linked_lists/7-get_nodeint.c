#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at index
 * @head: head of list
 * @index: nth node to find
 * Return: pointer to nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (i < index && head)
	{
		head = head->next;
		i++;
	}
	if (!head)
		return (NULL);
	return (head);
}
