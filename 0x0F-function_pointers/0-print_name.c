#include "main.h"
#include <stdio.h>

/**
 * print_name - function that prints a name that passes to it
 * @name: char to display to the stdout
 * @f: A pointer function
 * Return: No return cause we've declared VOID as R_TYPE
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is NULL */
		return;
}
