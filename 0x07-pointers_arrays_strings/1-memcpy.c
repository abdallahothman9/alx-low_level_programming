#include "main.h"

/**
 *_memcpy - it copies the area of memory
 *
 * @n: integer number
 * @dest: array of strings
 * @src: array of area memory of dest
*/
_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
