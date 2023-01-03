#include "main.h"
/*
 * _memcpy - copy vlues a var
 * @dest: destination
 * @src: source
 * @n: number of byte to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i = n;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n++;
	}
	return (dest);
}
