#include "main.h"
/**
 * _strlen_recursion - check code
 * @s: input string
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	return (1 + _strlen_recursion(s + 1));
}
