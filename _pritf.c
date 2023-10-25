#include "main.h"

/**
 *_printf customized printf function
 *@word string
 *return the number of string characters
 */
int _printf(const char *word, ...)
{
	int counter;
	va_list args;
	counter = 0;
	va_start(args, word);
	while(*word != '\0')
	{
		if(*word == '%')
		{
			counter += counter + _print_format_custom(*(++word), args);
			++word;
		}
		else
		{
			counter += counter+ _print_character(*word);
			++word;
		}
	}
	va_end(args);
	return(counter);
}
