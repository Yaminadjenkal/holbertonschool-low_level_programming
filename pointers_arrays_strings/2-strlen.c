#include "main.h"
/*
 *_strlen - returns the length of a string
 *@s: pointer to the string
 * return the value of leng
 */
int _strlen(char *s)
{
	int leng = 0;
	 while (s[leng] != '\0')
	 {
		 leng++;
	 }

return (leng);		
}


