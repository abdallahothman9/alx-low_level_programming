#include "main.h"
/**
 * print_sign - gove number sign
 *
 * @n: give input
 * Return: return 1 if plus return 0 if equal 0 return -1 if -
**/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
