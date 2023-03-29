#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
    int len, len2;

	len =  _printf(NULL);
	len2 =  printf(NULL);

    _printf("Length:[%d]\n", len);
    _printf("Length:[%d]\n", len2);
/*
	len =  _printf("%d, %i\n", -762534, -762534);
	len2 = printf("%d, %i\n", -762534, -762534);

    printf("Length:[%d]\n", len);
    printf("Length:[%d]\n", len2);

	len =  _printf("%i\n", 10254);
	len2 = printf("%d\n", 10254);

    printf("Length:[%d]\n", len);
    printf("Length:[%d]\n", len2);
*/
    return (0);
}
