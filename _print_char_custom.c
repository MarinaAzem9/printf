#include "main.h"

/**
 * _print_char - check character inserted
 * @ch: input character
 * Return: 1
 */

int _print_character(char ch)
{
	return (write(1, &ch, 1));
}
