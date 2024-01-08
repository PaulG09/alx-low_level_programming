#include "main.h"
/**
 * _memset - check code
 * @s: input parameter
 * @b: input parameter
 * @n: input parameter
 * Return: Always s(success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *result = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	putchar(result);
}
