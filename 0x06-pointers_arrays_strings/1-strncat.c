#include "main.h"
/**
 * _strncat - check code
 * @dest: input parameter
 * @src: input parameter
 * @n: input parameter
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = *dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';
	putchar(reuslt);
}
