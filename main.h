#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _formatf(va_list args, char format);
int convchar(int format);
int convstr(char *str);
int convmod(int count);
int convnum(int num);
int _print_num(int n, int count);
int convbin(unsigned int bin);
int print_binary(unsigned int num, int count);
unsigned int convu(unsigned int num);
unsigned int convoctal(unsigned int num);
unsigned int convlhex(unsigned int num);
unsigned int convuhex(unsigned int num);
int _print_u(unsigned int n, int base, int hex_case);


#endif


