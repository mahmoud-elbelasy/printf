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
    int len;

	len =  _printf("Let's try to printf a simple sentence %s %c%c%c %% %d\n", "Ahmed", 'A', 'H', 'C', 500);
    printf("Length:[%d]\n", len);
    _printf("%d\n", -512256);
    return (0);
}
