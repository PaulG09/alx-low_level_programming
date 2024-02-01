#include "main.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: input parameter
 * Return: Always h
 */
size_t list_len(const list_t *h)
{
	size_t number;

	number = 0;

	while (h != NULL)
	{
		h->next = len;
		number++;
	}

	return (number);
}
