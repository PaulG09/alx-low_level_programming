#include <stdio.h>
/**
 * main- prints the alphabet in lowercase, and then in uppercase
 * Return:- Always 0
 */
int main(void)
{
	char alphabet, letter;

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		for (letter = 'a'; letter <= 'z'; letter)
		{
			putchar(letter);
		}
		 putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
