#include "main.h"
#include <stdarg.h>

/**
 * _printf - function that act like printf function
 * @format: the object that will be print
 * Return: ALways 0
 */

int _printf(char *format, ...)
{
	char *p;
	unsigned int i;


	va_list arg;
	va_start(arg, format);

	for (p = format; *p != '\0' ; p++)
	{
		i++;
		while (*p != '%')
		{
			_putchar(*p);
			p++;
		}
		p++;
	}
	va_end(arg);
	return (i);
}

