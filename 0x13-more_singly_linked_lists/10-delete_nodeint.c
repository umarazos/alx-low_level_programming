#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a certain index
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted (starts at 0).
 *
 * Return: 1 on success | -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *recur = *head;
	unsigned int node;

	if (recur == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(recur);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (recur->next == NULL)
			return (-1);

		recur = recur->next;
	}
	temp = recur->next;
	recur->next = temp->next;
	free(temp);
	return (1);
}
