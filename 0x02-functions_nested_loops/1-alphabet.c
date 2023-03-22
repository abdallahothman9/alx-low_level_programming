#include "main.h"
/**
 *print_alphabet - Prints the lowercase alphabet using putchar
 *
 *description prints _putchar using putchar prototype
 *
 * return always 0 (success)
*/

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
		_putchar(j);
	_putchar('\n');
}
