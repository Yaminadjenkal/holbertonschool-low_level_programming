#include "variadic_functions.h"

/**
 * sum_them_all - Returns sum of all parameters
 * @n: Number of parameters
 *
 * Return: Sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
va_end(args);
return (sum);
}
