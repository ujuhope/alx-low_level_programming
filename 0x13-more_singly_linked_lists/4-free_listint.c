#include "lists.h"

/**
 * free_listint - frees a singly linked list
 *
 * @head: Pointer to head of singly linked list
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head;
		head = (*head).next;
		free(aux);
	}

	free(head);
}
