#include "main.h"
/**
 * _strlen - give the length of string
 * @s: the parameter
 *
 * Return: integer
**/

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
