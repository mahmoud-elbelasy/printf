#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int get_print(const char *format, va_list arg);
void handle_char(va_list arg, int *ptr);
void handle_str(va_list arg, int *ptr);
void handle_decimal_d(va_list arg,int *ptr);
void handle_decimal_i(va_list arg,int *ptr);
void handle_the_rec(int n);
int conv_from_HEX(char *binary_num);
int conv_from_HEX(char *n);
int get_number(char *num_str);
#endif /* MAIN_H */
