#include "lists.h"

/**
	* loop_listint_len - Finds loop by using two pointers
	* if these pointers meet there's a loop in the linked list
	*
	* @head: Pointer to head of linked list
	* Return: Always 0 (Success)
	*/
size_t loop_listint_len(const listint_t *head)
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
 * free_listint_safe - Frees a linked list even lists
 * with loops
 *
 * @h: Pointer to head to linked lists containing loops
 * Return: The size of list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = loop_listint_len(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
