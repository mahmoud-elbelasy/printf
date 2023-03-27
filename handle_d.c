#include "main.h"
#include <stdarg.h>
/**
 * handle_decimal_d - print an integer num
 * @arg: the arguments list
 * @ptr: a pointer
 * Return (void)
 */
void handle_decimal_d(va_list arg, int *ptr)
{
	int num;

	num = va_arg(arg, int);
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num > 10)
		handle_the_rec(num / 10);

	_putchar (num % 10 + '0');
	*ptr += 1;
}
