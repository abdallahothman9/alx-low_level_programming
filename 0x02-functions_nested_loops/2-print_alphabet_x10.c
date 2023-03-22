#include "main.h"
/**
 *print_alphabet - Prints the lowercase alphabet using putchar
 *
 *description prints _putchar using putchar prototype
 *
 * return always 0 (success)
*/

void print_alphabetx10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{

		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');

	}
}
