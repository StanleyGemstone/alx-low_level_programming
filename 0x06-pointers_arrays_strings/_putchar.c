#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints the char c to stdout
 * @c: the character to print
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
