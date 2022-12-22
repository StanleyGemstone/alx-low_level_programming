#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @*dest: the first string
 * @*src: the second string
 * Return: pointer of dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
