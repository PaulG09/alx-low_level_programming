#include "main.h"
#include <string.h>
/**
 * puts_half - check code
 * @str: input parameter
 * Return: Always str
 */
void puts_half(char *str)
{
	if (str != NULL)
	{
		int length = strlen(str);
		int start;
		int i;

		if (length % 2 == 0)
		{
			start = length / 2;
		}

		else
		{
			start = (length - 1) / 2;
		}

		for (i = start; i <= length; i++)
		{
			putchar(str[i]);
		}

		putchar('\n');

	}

}

