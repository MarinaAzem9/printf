#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _print_int_decimal(int number1, int basetodive);
int _print_str(char *str);
int _print_format_custom(char frmstp, va_list args);
int _print_character(int ch);
int _printf(const char *word, ...);	

#endif
