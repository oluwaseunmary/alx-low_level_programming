#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on succcess 1.
 * on errror-1 is returned, and is set apppropraitely.
 */
int_putchar(char c)
{
	Return(write(1, &c,1));
}
