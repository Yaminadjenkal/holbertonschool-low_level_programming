#include <stdio.h>

/**
* main - entry point
* Return: return 0 if success
*/

int main(void)
{
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of char: %zu bytes\n", sizeof(char));
printf("Size of float: %zu bytes\n", sizeof(float));
printf("Size of double: %zu bytes\n", sizeof(double));
return (0);
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
}
