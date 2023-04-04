#include "main.h"

/**
 * _strspn - give the length of string
 *
 * @s:sring of array
 * @accept: array of string needed to be found in s
 * Return: number of bytes of initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0' i++)
	{
		for ((j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
		return (i);
}
