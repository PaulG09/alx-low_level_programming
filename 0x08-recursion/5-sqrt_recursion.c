#include "main.h"
/**
 *  _sqrt_recursion - check code
 *  @n: input parameter
 *  Return: n
 */
int _sqrt_recursion(int n)
{
	if (n != n * n / n)
	{
		return (-1);
	}

	return (n * _sqrt_recursion(n - 1));
}
