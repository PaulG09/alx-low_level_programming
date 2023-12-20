#include "main.h"
/**
 *  print_sign -prints the sign of a number
 *  @n: sign of the number
 *  Return:1 and prints +, 0 and prints 0 , -1 and prints -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		putchar(48 + 0);
		return (0);
	}
	else
	{
		putchar(45 + 0);
		return (-1);
	}

}
