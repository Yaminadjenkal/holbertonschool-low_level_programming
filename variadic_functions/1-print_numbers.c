#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
/**
 *print_numbers-print a string
 *@va_list : list of arguments 
 *@va_start : beggining of argument
 *@va_end : the end of argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start (args, n);
	if (separator != NULL)
	printf ("%s\n",separator);
	va_end (args);
}
