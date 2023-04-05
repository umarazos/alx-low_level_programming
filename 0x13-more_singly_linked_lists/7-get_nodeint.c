#include "lists.h"

/**
 * get_nodeint_at_index - gets nth node of a linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node (starting at 0)
 *
 * Return: pointer to a node,
 * or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
