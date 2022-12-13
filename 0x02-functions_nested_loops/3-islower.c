#include "main.h"

/**
 * Main - check if a character is in lower case
 * Description:
 * Return: 1 if letter is lowercase 0 if it is not
 */
int _islower(int c)
{
	if (c <= 'a' && c >= 'z')
		return (1);
	else
		return (0);
}
