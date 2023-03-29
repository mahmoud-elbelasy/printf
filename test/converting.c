#include "main.h"
#include <string.h>
#include <math.h>
#include <stdlib.h>
/**
 * get_number - function to know the base of the num
 * @num: the number
 * Return: ..
 */
int get_number(char *num_str)
{
	int num_len;
	int is_decimal;
	int is_hexadecimal;
	int is_binary;
	
	num_len = strlen(num_str);
	is_decimal = 1;
	is_hexadecimal = 0;
	is_binary = 0;
    
	if (num_str[0] == '0' && (num_str[1] == 'x' || num_str[1] == 'X'))
	{
		is_decimal = 0;
		is_hexadecimal = 1;
	}
	else if (num_str[num_len-1] == 'B' || num_str[num_len-1] == 'b')
	{
		is_decimal = 0;
		is_binary = 1;
	}

	if (is_decimal)
		return (0);
	if (is_hexadecimal)
		return(1);
	if (is_binary)
		return (2);
	return (0);
}


/**
 * conv_from_HEX - converting the Hexedecimal number to decimal
 * @n: the hexedicimal num
 * Return: the decimal
 */
int conv_from_HEX(char *n)
{
	int num;

	num = strtoul(n, NULL, 16);
	return (num);
}
/**
 * conv_from_BIN - converting the binary number to decimal
 * @n:the binary num
 * Return: the decimal
 */
int conv_from_BIN(char *binary_num)
{
	int len;
	int decimal_num;
	int i, j;
	int digit;

	len = strlen(binary_num);
	decimal_num = 0;

	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		digit = binary_num[i] - '0';
		decimal_num += digit * pow(2, j);
	}
	return (decimal_num);
}
