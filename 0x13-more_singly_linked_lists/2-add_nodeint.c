#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
	* add_nodeint - Adds a new node to linked list from the beginning
	*
	* @head: Pointer to head of linked list
	* @n: The integer to assign to the new node
	* Return: Linked list with new nodes or NULL if fails
	*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head != NULL)
	{
		new_node = (listint_t *)malloc(sizeof(listint_t));
		if (new_node == NULL)
		return (NULL);

		(*new_node).n = n;
		(*new_node).next = *head;
		*head = new_node;

		return (new_node);
	}

	return (NULL);
}
