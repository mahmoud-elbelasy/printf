#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int get_print(const char *format, va_list arg);
void handle_char(va_list arg, int *ptr);
void handle_str(va_list arg, int *ptr);
void handle_decimal_d(va_list arg, int *ptr);
void handle_the_rec(int n, int *ptr);

#endif /* MAIN_H */
