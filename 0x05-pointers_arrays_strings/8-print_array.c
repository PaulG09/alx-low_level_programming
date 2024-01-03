#include "main.h"
/**
 * print_array - check code
 * @a: input parameter
 * @n: input parameter
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	if (a != NULL && n > 0)

	{
		int i;

		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);

			if (i < n - 1)
			{
				printf(", ");
			}
		}

		putchar('\n');
	}
}
