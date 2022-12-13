#include "main.h"

/**
 * main - Entry
 * Return: Always 0
 */
void print_alphabet(void)
{
	char ne;

	for (ne = 'a'; ne <= 'z'; ne++)
		putchar(ne);
	putchar('\n');
	
	return (0);
}
