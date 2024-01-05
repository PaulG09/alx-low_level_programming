#include "main.h"
/**
 * _strcat - check code
 * @dest: input parameter
 * @src: input parameter
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char *result = *dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	putchar(result);
}
