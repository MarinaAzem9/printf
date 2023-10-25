#include "main.h"

/**
 * _print_str - chech string inserted
 * @str:the string that we will print
 * Return: number of charachters of this string
 **/

int _print_str(char *str)
{
	int x = 0;

	while (*str)
	{
		_print_character((int)*str);
		x++;
		str++;
	}

	return (x);
}
