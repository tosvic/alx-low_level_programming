#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: char to display
 * @f: a pointer function
 * Return: No return cause we've declared VOID as R_TYPE
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
