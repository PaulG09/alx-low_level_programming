#include "main.h"
/**
 * _puts_recursion - check code
 * @s: input string
 * Return: Always s
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return ('\n');
	}

	putchar(s);
	_puts_recursion(s + 1);
}
