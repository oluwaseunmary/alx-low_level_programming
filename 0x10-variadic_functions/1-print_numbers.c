#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints number
 * @n: number to print
 * @separator: prints a string separator between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(num, int));
			printf("%s", separator);
		}
		else
			printf("%d", va_arg(num, int));
	}
	printf("\n");
	va_end(num);
}
