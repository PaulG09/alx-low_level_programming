#include "main.h"
#include <string.h>
/**
 * rev_string - check code
 * @s: input parameter
 * Return: Always s
 */
void rev_string(char *s)
{
	if (s != NULL)
	{
		int length = strlen(s);
		int start;
		int end = length - 1;

		while (s[length] != '\0')
		{
			length++;
		}

		while (start < end)
		{
			char temp = s[start];

			s[start] = s[end];
			s[end] = temp;
			start++;
			end--;
		}
	}
}
