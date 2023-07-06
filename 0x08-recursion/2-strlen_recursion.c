#include "main.h"
/** 
 * _strlen_recursion - calculate the length of a string.
 * @s:  string to be measured by counting
 * Returns: Interger value of the string length.
 */
int _strlen_recursion(char *s);
{
	if (*s == '/0')
	{
		return(0);
	}
	s++;
	return(_strlen_recursion(s) + 1);
}
