#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _printf_helper(const char *format, va_list args);
int _printf_char(va_list args);
int _printf_string(va_list args);
int _printf_percent(void);
int _printf_int(va_list args);
int _printf_binary(va_list args);
int _printf_un(va_list args);
int _printf_octals(va_list args);
int _printf_upper_hex(va_list args);
int _printf_lower_hex(va_list args);
int _printf_S(va_list args);

#endif /*MAIN_H*/
