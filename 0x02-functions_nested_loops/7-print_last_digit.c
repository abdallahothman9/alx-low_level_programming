# include"main.h"
/**
 * print_last_digit - it print the last digit
 *
 * @n:the number taken
 * Return:returns the last digiy from n
**/
int print_last_digit(int n)
{
	int lastDigit
		;
	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
