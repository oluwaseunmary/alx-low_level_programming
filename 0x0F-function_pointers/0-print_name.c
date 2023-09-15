#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name
 * @name: prints the name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
