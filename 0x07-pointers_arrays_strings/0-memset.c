#include "main.h"
/**
 * _memset - add value to a memory
 * @s: string
 * @b: value to be added
 * @n: number of bytes to be added
 * Return: return 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n++;
	}
	return (0);
}
