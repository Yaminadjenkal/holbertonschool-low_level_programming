#include "main.h"
/**
*_isalpha - control if c is A or a
*@c: character to be verified
*Return: return 0 or 1
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
