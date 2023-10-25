#include "main.h"
/**
 * _print_format_custom check the format and print depends on it
 * @frmtsp the format specifier
 * @args argumentnts
 * return the number of printed character
 */

int  _print_format_custom(char frmtsp, va_list args)
{
	int counter;
	counter = 0;
	if (frmtsp == '%')
		_print_char_custom(frmtsp);
	else if (frmtsp == 'c')
		_print_char_custom(va_args(args, int), int);
	else if (frmtsp == 's')
		_print_string_custom(va_args(args, char *));
	else if (frmtsp == 'i' || frmtsp == 'd')
		_print_int_decimal(va_args(args, int), 10, digit);
}
