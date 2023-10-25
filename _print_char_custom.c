#include "main.h"

/**
 * _print_char - check character inserted
 * @ch: input character
 * Return: number of characters
 */

int _print_character(int ch)
{
	return (write(1, &ch, 1));
{
