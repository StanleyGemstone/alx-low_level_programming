#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - adds all arguments
 * @n: number of arguments
 *
 * Return: n or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list all_arg;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start (all_arg, n);
	for(i = 0; i < n; i++)
		sum += va_arg(all_arg, const unsigned int);
	va_end (all_arg);
	return (sum);
}
