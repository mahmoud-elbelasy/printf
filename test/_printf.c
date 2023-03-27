#include "main.h"
#include <stdarg.h>

/**
 * _printf - function that act like printf function
 * @format: the object that will be print
 *
 * Return: number of characters were printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int count = 0;

	va_start(arg, format);

	count = get_print(format, arg);

	va_end(arg);
	return (count);
}
