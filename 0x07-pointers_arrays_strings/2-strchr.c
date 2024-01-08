#include "main.h"
/**
 * _strchr - check code
 * @s: input parameter
 * @c: input parameter
 * Return: Always s(success);
 */
char *_strchr(char *s, char c)
{
	if (*s != '\0')
	{
		while (*s == c)
		{
			return (s);
		}

		s++;
	}
	else
	{
		return (NULL);
	}
}
