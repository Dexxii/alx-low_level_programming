#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input
 */
void puts_half(char *str)
{
	int lens = 0;

	while (*str !=  '\0')
	{
		lens++;
		str++;
	}
	str == (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
	}
	_putchar('\n');
}
