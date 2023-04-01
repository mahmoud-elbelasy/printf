#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int get_print(const char *format, va_list arg);
void handle_char(va_list arg, int *ptr);
void handle_str(va_list arg, int *ptr);
void handle_decimal_d(va_list arg,int *ptr);
<<<<<<< HEAD
void handle_the_rec(int n, int *ptr);

=======
void handle_decimal_i(va_list arg,int *ptr);
void handle_the_rec(int n);
int conv_from_HEX(char *binary_num);
int conv_from_HEX(char *n);
int get_number(char *num_str);
>>>>>>> 878e07a640932aed4b806951cfdec8446e5b7f18
#endif /* MAIN_H */
