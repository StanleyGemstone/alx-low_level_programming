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
	va_list allarg;
	unsigned int i;

	va_start (allarg, n);
	for(i = 0; i < n; i++)
		printf("%s%d", separator, va_arg(allarg, const unsigned int));
	printf("\n");
}
