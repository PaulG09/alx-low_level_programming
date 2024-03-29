#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: input string
 * @f: pointer to function
 * Return: Always name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
