#include "main.h"
/**
 * _memcpy - copy values of a var
 * @dest: destination to paste
 * @src: source to copy
 * @n: number of byte to copy
 * Return: Always 0
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
