#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

int print_char(va_list);
int print_str(va_list);
int print_decs(va_list);
int print_int(va_list);

int _puts(char *c);
int _putchar(char c);
int _puts_num(int d);

#endif

