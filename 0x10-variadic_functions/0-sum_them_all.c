#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of its parameter
 * @n: number/amount of character
 * Return: the sum of it's argument
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list num;

	if (n == 0)
		return (0);
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
