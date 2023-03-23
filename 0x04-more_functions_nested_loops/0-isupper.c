/**
 * _isupper check if it upper case
 *
 * @c: the input alphapet
 * Return 1 if upper else return 0
**/

#include "main.h"

int _isupper(int c)
{
	if (c > 65 && c < 90)
	{
		return (1);
	}
	else
		return (0);
	
}

