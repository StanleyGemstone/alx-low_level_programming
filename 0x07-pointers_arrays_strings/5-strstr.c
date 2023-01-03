#include "main.h"
/**
 * _strstr - locates substrings
 * @haystack: string
 * @needle: substring
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;

		while (*i != *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p != '\0')
			return (needle);
	}
	return (0);
}
