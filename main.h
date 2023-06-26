#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _formatf(va_list args, char format);
int _print_num(int n, int count);
int print_binary(unsigned int num, int count);

#endif
