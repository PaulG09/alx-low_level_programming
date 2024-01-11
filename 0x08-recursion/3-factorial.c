#include "main.h"
/**
 *  factorial - check code
 *  @n: input parameter
 *  Return: Always n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else
		if (n == 0)
		{
			return (1);
		}

	return (n * (n - 1));
}
