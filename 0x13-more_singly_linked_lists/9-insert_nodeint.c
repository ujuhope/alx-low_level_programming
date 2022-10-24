#include "lists.h"
/**
	* insert_nodeint_at_index - Inserts a new node at a given position(index)
	*
	* @head: Pointer to head of singly linked list
	* @idx: The index of the sigly linked list(Starts at 0)
	* @n: Data passed to the new node added at index
	* Return: returns a new node added at a given position or NULL if fails
	*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_node;
	unsigned int tally = 1;

	if (head)
	{
		new_node = (listint_t *)malloc(sizeof(listint_t));
		if (new_node == NULL)
		return (NULL);

		new_node->n = n;
		if (idx > 0)
		{
			current = *head;
			for (; current != NULL; tally++)
			{
				if (tally == idx)
				{
					new_node->next = current->next;
					current->next = new_node;
					return (new_node);
				}
				current = current->next;
			}
			if (idx > tally)
			return (NULL);
		}
		else
		{
			new_node->next = *head;
			*head = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
