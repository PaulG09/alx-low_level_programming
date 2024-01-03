#include "main.h"
/**
 * puts2 - check code
 * @str: input parameter
 * Return: Always str(success)
 */
void puts2(char *str)
{
	if (str != NULL)
	{
		int i = 0;

		while (str[i] != '\0')
		{
			putchar(str[i]);
			i += 2;
		}

		putchar(\n');
	}
}
