#include "lists.h"
/**
 * print_list - return the number of nodes
 * @h: input parameter
 * Return: Always arr
 */
size_t print_list(const list_t *h)
{
	size_t volva = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s", 0, "(nil)");
		}

		else
		{
			 printf("[%d] %s", h->len, h->str);
			 h = h->next;
			 volva++;
		}
		return (volva);
	}
}
