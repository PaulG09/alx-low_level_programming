#include "lists.h"
/**
 * listint_len - eturns the number of elements in a linked listint_t list.
 * @h: input parameter
 * Return: lists number
 */
size_t listint_len(const listint_t *h)
{
	size_t list;
	int s;

	list = 0;
	s = strlen(h);
	while (h != NULL)
	{
		h = h->next;
		h++;
		printf("%d\n", h->n);
	}
	return (s);

}
