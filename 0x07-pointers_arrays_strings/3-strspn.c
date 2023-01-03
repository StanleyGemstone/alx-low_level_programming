#include "main.h"
/**
 * _strspn - Prints substrings
 * @s: string
 * @accept: character
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				i++;
				break;
			}
			else if (accept[n + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (0);
}
