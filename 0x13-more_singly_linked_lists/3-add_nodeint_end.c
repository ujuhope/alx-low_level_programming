#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to the end of the linked list
 *
 * @head: Pointer to head of linked list
 * @n: The integer passed to the new node
 * Return: New nodes at the end of the linked list or NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last;

	if (head)
	{
		new_node = (listint_t *)malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (*head);
		}
		else
		{
			last = *head;
			while (last->next)
				last = last->next;

			last->next = new_node;
			return (last);
		}
	}

	return (NULL);
}
