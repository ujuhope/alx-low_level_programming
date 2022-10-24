#include "lists.h"

/**
	* find_listint_loop - Finds loop by using two pointers
	* if these pointers meet there's a loop in the linked list
	*
	* @head: Pointer to head of linked list
	* Return: A linked list with loops or NULL if fails
	*/

listint_t *find_listint_loop(listint_t *head)
{
	/* Floyd’s Cycle-Finding Algorithm */
	listint_t *slow_p, *fast_p;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow_p = head->next;
	fast_p = (head->next)->next;

	while (fast_p)
	{
		if (slow_p == fast_p)
		{
			slow_p = head;

			while (slow_p != fast_p)
			{
				slow_p = slow_p->next;
				fast_p = fast_p->next;
			}

			return (slow_p);
		}

		slow_p = slow_p->next;
		fast_p = (fast_p->next)->next;
	}

	return (NULL);
}
