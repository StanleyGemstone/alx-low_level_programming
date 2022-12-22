#include "main.h"
/**
 * string_toupper - Changes alpha lower case to upper case
 * @n: pointer
 * Return: Always 0
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (0);
}
