#ifndef MY_PRINTF_HEADER
#define MY_PRINTF_HEADER
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int conv_spec(const char *, int, va_list);
#endif
