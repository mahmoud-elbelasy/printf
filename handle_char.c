#include "main.h"
#include <stdarg.h>

/**
 * handle_char - print a char
 * @arg: the arguments list
 * @ptr: a pointer tpothe number of characters to * be incremented
 *
 * Return: void
 */

void handle_char(va_list arg, int *ptr)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	*ptr += 1;
}
