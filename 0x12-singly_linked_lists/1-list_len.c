#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t m;

	for (m = 0; h != NULL; h = h->next, m++)
	{
		/* Loop body is empty since we're just counting elements */
	}
	return (m);
}
