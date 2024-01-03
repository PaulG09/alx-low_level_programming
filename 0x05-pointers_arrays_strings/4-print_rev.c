#include "main.h"
/**
 * print_rev - check code
 * @s: input parameter
 * Return: Always s (success)
 */
void print_rev(char *s)
{
	if (s != NULL)
	{
		while (*s != '\0')
		{
			s++;
		}

		for (int i = *s - 1; i <= 0; i++)
		{
			putchar(s[i]);
		}

		putchar('\n');
	}
}
