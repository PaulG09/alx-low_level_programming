#include "main.h"
int actual_sqrt_recursion(int n, int i);

/**
 *  _sqrt_recursion - check code
 *  @n: input parameter
 *  Return: n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (0);
}


/**
 * actual_sqrt_recursion - recursively checks for natural square root
 * @i:input parameter
 * @n:input parameter
 * Return: n
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}

	else
		if (i * i == n)
		{
			return (i);
			return (actual_sqrt_recursion(n, i + 1));
		}
}
