#include "main.h"
/**
 *_printf customized printf function
 *@word string
 *return the number of string characters
 */
int _printf(const char *word, ...)
{
	int counter = 0;
	va_list args;
	va_start(args, word);
	while(*word != '\0')
	{
		if(*word == '%')
		{
			counter = counter + _print_format_custom(*(++word), args);
			++word;
		}
		else if(*word != '%')
		{
			counter = counter + _print_character(*word);
			++word;
		}
			
	}
	va_end(args);
	return(counter);
}
