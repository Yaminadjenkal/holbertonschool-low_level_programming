#include "main.h"
/**
*_isalpha - control if c is A or a
*@c: character to be verified
*Return: return 0 or 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'Z')
return (1);

return (0);
}
