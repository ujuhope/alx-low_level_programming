#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints the elements and returns their count
 *
 * @h: Pointer to head of linked list
 * Return: Returns count of elements if h != NULL or 0 if fails
 */
size_t print_listint(const listint_t *h)
{
	int tally = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", (*h).n);
			h = (*h).next;
			tally++;
		}
	}

	return (tally);
}
