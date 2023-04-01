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
	int num;

	num = va_arg(arg, int);
	if (num < 0)
	{
		_putchar('-');
		*ptr += 1;
		num = -num;
	}
	if (num >= 10)
		handle_the_rec(num / 10, ptr);

	_putchar (num % 10 + '0');
	*ptr += 1;
}
