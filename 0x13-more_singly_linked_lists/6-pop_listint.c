#include "lists.h"

/**
	* pop_listint - Deletes head node and leaves dataa attached to it
	*
	* @head: Pointer to head of linked list
	* Return: Returns data stored by head node
	*/
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int data = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (data);
}
