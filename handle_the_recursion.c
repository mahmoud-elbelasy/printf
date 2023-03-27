#include "main.h"
/**
 * handle_the_rec - if the num bigger than 10 it will be handled
 * @n: the number
 * Return: void
 */
void handle_the_rec(int n)
{
	if (n / 10)
		handle_the_rec(n / 10);


	_putchar(n % 10 + '0');
}

