#include "main.h"
#include <stdarg.h>
#include <stddef.h>
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
	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		*ptr += 6;
	}
	else
	{
		while (*str != '\0')
		{
			_putchar(*str);
			*ptr += 1;
			str++;
		}
	}
}
