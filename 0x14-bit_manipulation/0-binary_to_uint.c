#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - A function  that converts binary
 * to an integers and decimal numbers
 *
 * @b: a pointer to the string of characters
 *
 * Return: the converted output / 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int stlen = 0;
	size_t sum;
	size_t i;
	size_t j;
	size_t raise = 1;
	int base_2 = 2;

	sum = 0;
	if (b == NULL)
		return (0);
	for (stlen = 0; b[stlen] != '\0'; stlen++)
		;
	if (stlen == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
		for (j = stlen - 1; j > 0; j--)
		raise = raise * base_2;
		sum = sum + (raise * (b[i] - 48));
		stlen--;
		raise = 1;
	}
		return (sum);
}
