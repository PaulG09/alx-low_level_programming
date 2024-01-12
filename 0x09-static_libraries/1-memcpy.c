#include "main.h"
/**
 * _memcpy - check code
 * @dest: input parameter
 * @src: input parameter
 * @n: input parameter
 * Return: Always dest(success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *result = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (result);
}
