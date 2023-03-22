#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase alphabet using putchar
 *
 * Description prints _putchar using putchar prototype
 *
 * Return always 0 (success)
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{

		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');

	}
}
