#include "main.h"
#include <stdarg.h>

/**
 * get_print - the function resposible for handle printing
 * @format: the string out printf treats with
 * @arg: the varibale argument passed to our function
 *
 * Description: I use flag var as an indicator as follow
 * flag = 0 --> normal character
 * flag = 1 --> format specifier
 * and then I process that in the next loop
 *
 * Return: the number of characters being printed
 */

int get_print(const char *format, va_list arg)
{
	int flag = 0;
	int n = 0;

	while (*format)
	{
		if (flag == 0)
		{
			if (*format == '%')
				flag = 1;
			else
			{
				_putchar(*format);
				n++;
			}
		}
		else if (flag == 1)
		{
			switch (*format)
			{
				case 'c':
					handle_char(arg, &n);
					break;
				case 's':
					handle_str(arg, &n);
					break;
				case '%':
					_putchar('%');
					n++;
					break;
			}
			flag = 0;
		}
		format++;
	}
	return (n);
}