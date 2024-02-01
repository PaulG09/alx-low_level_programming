#include "lists.h"
/**
 * print_list - return the number of nodes
 * @h: input parameter
 * Return: Always arr
 */
size_t print_list(const list_t *h)
{
	size_t arr;

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
			 arr++;
		}

		return (arr);
	}
}
