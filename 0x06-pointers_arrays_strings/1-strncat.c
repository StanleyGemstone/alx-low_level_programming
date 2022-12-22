#include "main.h"
#include <stdio.h>
/**
 * _strncat - Concatenates two string
 * @dest: first string
 * @src: second string
 * @n: byte to be added
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
