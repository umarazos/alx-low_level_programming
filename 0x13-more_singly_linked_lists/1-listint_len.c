#include "lists.h"

/**
 * listint_len - number of elements in a linked list
 * @h: head of a node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
