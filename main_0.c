#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main Main fun
 * Return 0 if success 
 */
int main (void)
{
	int len, len2;
	len = _printf("%d", 1024);
	len2 = printf("%d", 1024);

	fflush(stdout);
	if(len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return(1);
	}
	return(0);
}
