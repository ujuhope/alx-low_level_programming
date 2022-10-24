#include "lists.h"
#include <assert.h>

/**
 * get_nodeint_at_index - Prints nth node of linked list
 *
 * @head: Pointer to head of linked list
 * @index: The position of the node starting from 0
 * Return: Returns the nth node of the linked list if fail returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int tally;

	for (tally = 0; head != NULL; tally++)
	{
		if (tally == index)
		return (head);

		head = (*head).next;
	}

	return (NULL);
}
