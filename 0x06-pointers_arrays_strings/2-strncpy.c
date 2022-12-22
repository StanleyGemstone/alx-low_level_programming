#include "main.h"
/**
 * _strncpy - copys strings
 * @dest: copy to
 * @src: copy from
 * @n: number of char to copy
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
