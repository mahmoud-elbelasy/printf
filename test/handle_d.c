#include "main.h"
#include <stdarg.h>
/**
 * handle_decimal_d - print an integer num
 * @the arguments list
 * @ptr: a pointer 
 * Return (void)
 */
void handle_decimal_d(va_list arg, int *ptr)
{
	char *num;
	int x, y, z;

	num = va_arg(arg, char *);
	y = get_number(num);
	if (y == 1)
		x = conv_from_HEX(num);
	else if (y == 2)
		x = conv_from_HEX(num);
	else
	{
		z = va_arg(arg, int);
		x = z;
	}
	if (x < 0)
	{
		_putchar('-');
		x = -x;
	}
	if (x > 10)
		handle_the_rec(x / 10);

	_putchar (x % 10 + '0');
	*ptr += 1;
}
