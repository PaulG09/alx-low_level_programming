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
		int length = 0;

		while (s[length] != '\0')
		{
			length++;
		}

		for (int i = length - 1; i >= 0; i--)
		{
			putchar(s[i]);
		}

		putchar('\n');
	}
}
