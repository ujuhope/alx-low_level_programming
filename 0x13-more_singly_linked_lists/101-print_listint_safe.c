#include "lists.h"

/**
	* loop_list_len - Finds loop by using two pointers
	* if these pointers meet there's a loop in the linked list
	*
	* @head: Pointer to head of linked list
	* Return: Always 0 (Success)
	*/
size_t loop_list_len(const listint_t *head)
{
	/* Floyd’s Cycle-Finding Algorithm */
	const listint_t *slow_p, *fast_p;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow_p = head->next;
	fast_p = (head->next)->next;

	while (fast_p)
	{
		if (slow_p == fast_p)
		{
			slow_p = head;
			while (slow_p != fast_p)
			{
				count++;
				slow_p = slow_p->next;
				fast_p = fast_p->next;
			}

			slow_p = slow_p->next;
			while (slow_p != fast_p)
			{
				count++;
				slow_p = slow_p->next;
			}

			return (count);
		}

		slow_p = slow_p->next;
		fast_p = (fast_p->next)->next;
	}

	return (0);
}

/**
	* print_listint_safe - Prints the number of nodes in a linked list
	* (loop involved lists too) and their addresses
	*
	* @head: Pointer to head of singly linked list
	* Return: NUmber of nodes in the list
	*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count, index = 0;

	count = loop_list_len(head);

	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < count; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}
