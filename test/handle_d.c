#include "main.h"
#include <stdarg.h>

/**
 * handle_the_rec - if the num bigger than 10 it will be handled
 * @n: the number
 * @ptr: a pointer to int
 * Return: void
 */

void handle_the_rec(int n, int *ptr)
{
	if (n / 10)
		handle_the_rec(n / 10, ptr);

	_putchar(n % 10 + '0');
	*ptr += 1;
}

/**
 * handle_decimal_d - print an integer num
 * @arg: the arguments list
 * @ptr: a pointer
 *
 * Return: (void)
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
<<<<<<< HEAD
		*ptr += 1;
		num = -num;
	}
	if (num >= 10)
		handle_the_rec(num / 10, ptr);
=======
		x = -x;
	}
	if (x > 10)
		handle_the_rec(x / 10);
>>>>>>> 878e07a640932aed4b806951cfdec8446e5b7f18

	_putchar (x % 10 + '0');
	*ptr += 1;
}
