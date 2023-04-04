#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: array of string
 *
 * @c: character to find
 * Return:0 in success
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
