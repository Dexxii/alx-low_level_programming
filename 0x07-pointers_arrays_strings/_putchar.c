#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: char to be printed
 * Return: on success 1 or else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
