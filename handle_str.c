#include "main.h"
#include <stdarg.h>

/**
 * handle_str - print a str
 * @arg: the arguments list
 * @ptr: a pointer tpothe number of characters t * o be incremented
 *
 * Return: void
 */

void handle_str(va_list arg, int *ptr)
{
	char *str;

	str = va_arg(arg, char*);
	while (*str != '\0')
	{
		_putchar(*str);
		*ptr += 1;
		str++;
	}
}
