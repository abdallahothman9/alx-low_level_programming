#include "main.h"
/**
 * jack_bauer - print every minute of the day 
 *
 *
**/
void jack_bauer(void)
{
	int i,j;

	for (i=0;i<24; i++)
	{
		for (j=0; j < 60; j++)
		{
			if (i<10)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else if (i >= 10)
			{
				_putchar(i);
                        _putchar((i / 10 ) + '0');
                        _putchar((i % 10 ) + '0');
			}

			if (j < 10)
			{
				_putchar(:);
                        	_putchar('0');
                        	_putchar(j);
			}
			   else if (i >= 10)
                        {
                            
				_putchar(i);
				_putchar(':');
				_putchar(j);
			}

