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
		counter += _print_character(frmtsp);
	else if (frmtsp == 'c')
		counter += _print_character(va_arg(args, int));
	else if (frmtsp == 's')
		counter += _print_str(va_arg(args, char *));
	else if (frmtsp == 'i' || frmtsp == 'd')
		counter += _print_int_decimal(va_arg(args, int), 10);
	return (counter);
}
