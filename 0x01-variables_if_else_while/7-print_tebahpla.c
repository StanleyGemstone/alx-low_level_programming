#include <stdio.h>
/**
 * main - print alpha in reverse in lowercase
 * return: Always 0
 */
int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
	putchar(r);
	putchar('\n');
	return (0);
}
