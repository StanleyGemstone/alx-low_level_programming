#include "main.h"
/**
 * reverse_array - Prints content in reverse
 * @a: content to print
 * @n: number of element in array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
