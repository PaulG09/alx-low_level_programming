#include "main.h"
/**
 * _strchr - check code
 * @s: input parameter
 * @c: input parameter
 * Return: Always s(success);
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		else
		{
			return (NULL);
		}

		s++;
	}
}
