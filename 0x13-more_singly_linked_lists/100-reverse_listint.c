#include "lists.h"

/**
	* reverse_listint - Reverses a single linked list
	*
	* @head: Pointer to head of single linked list
	* Return: Nothing
	*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (head)
	{
		while (*head != NULL)
		{
			next = (*head)->next;
			(*head)->next = prev;
			prev = *head;
			*head = next;
		}
		*head = prev;
		return (*head);
	}

	return (NULL);
}
