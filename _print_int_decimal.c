#include "main.h"

/**
 * _print_int_decimal print int decimal number
 * @number1 number inserted as input
 * @basetodive base of the number
 */

int _print_int_decimal(int number1, int basetodive)
{
	int counter = 0;
	char *digit = "123456789";
	if (number1 < 0)
	{
		write(1, "-", 1);
		number1 = -number1;
		counter += _print_int_decimal(number1, basetodive) + 1;
	}
	if (number1 < basetodive)
		counter += _print_character(digit[number1]);
	else
	{
		counter = _print_int_decimal(number1 / basetodive, basetodive);
		counter += _print_int_decimal(number1 % basetodive, basetodive);
	}
	return (counter);
}
