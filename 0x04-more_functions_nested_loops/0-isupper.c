#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar('1');
	}
	else
	{
		_putcahr('0');
	}
}
