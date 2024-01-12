#include "main.h"
/**
 * _strlen - check code
 * @s: input character
 * Return: Always 0.
 */
int _strlen(char *s)
{
	if (s != NULL)
	{
		int length = 0;

		while (*s != '\0')
		{
			length++;
			s++;
		}

		return (length);
	}

	else
	{
		return (-1);
	}
}
