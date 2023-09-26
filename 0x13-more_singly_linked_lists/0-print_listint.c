#include "main.h"

/**
 * print_listint - print the elements of a singly linked list.
 * @h: A pointer to the head node of the linked list.
 *
 * Return:The number of nodes in the linked list.
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return count;
}
