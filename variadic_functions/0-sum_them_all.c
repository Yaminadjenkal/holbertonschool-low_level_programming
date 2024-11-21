#include "variadic_functions.h"

/*sum_them_all-variadic function that take a variable number
 *@va_list args: list of arguments
 *@va_start:the start
 *@va_end :the end
 *return 0 if n is 0
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
	va_start (args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
va_end(args);
return (sum); 
}
