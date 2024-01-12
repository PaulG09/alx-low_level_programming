#include "main.h"
/**
 * _puts - check code
 * @str: input parameter
 * Return: Always str
 */
void _puts(char *str)
{
	if (str != NULL)
	{
		while (*str != '\0')
		{
			putchar(*str);
			str++;
		}

		putchar('\n');
	}
}
