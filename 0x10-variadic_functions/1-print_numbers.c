#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_number - Displays all integer
 * @separator: a string separator
 * @n: number of arguments
 *
 * Return: all integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	if (n > 0)
	{
		va_start(args, n);
		while (i < n)
		{
			printf("%d", va_arg(args, int));
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(args);
	}
	printf("\n");
}
