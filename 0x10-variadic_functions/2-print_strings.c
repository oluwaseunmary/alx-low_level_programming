#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints the string
 * @separator: prints a separator between the strins
 * @n: prints number
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list word;
	unsigned int i;
	char *re;

	va_start(word, n);
	
	for (i = 0; i < n; i++)
	{
		re = va_arg(word, char *);
	
		if (re == NULL)
			printf(("nil"));
		else
			printf("%s", re);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(word);
}
