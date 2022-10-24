#include "lists.h"

/**
	* sum_listint - Adds all data stored in a linked list recursively
	*
	* @head: Pointer to head of linked list
	* Return: Total sum of integers stored in the nodes
	*/
int sum_listint(listint_t *head)
{
	if (head == 0)
	return (0);
	else
	return (sum_listint(head->next) + head->n);
}
