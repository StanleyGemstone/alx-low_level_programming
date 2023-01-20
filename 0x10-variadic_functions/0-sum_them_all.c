#include "variadic_functions.h"
#include <stdarg>

sum_them_all(const unsigned int n, ...)
{
	va_list all_arg;
	int i, sum = 0;

	if (n == 0)
		return (0);
	va_start (all_arg, n);
	for(i = 0; i < n; 1++)
		sum += va_arg(all_arg, const unsigned int);
	va_end (all_arg);
	return (sum);
}
