#include "main.h"
/** 
 * _strlen_recursion - calculate the length of a string.
 * @s:  string to be measured by counting.
 *
 * Return: Interger value of the string length.
 */
int _strlen_recursion(char *s);
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
