#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/*Declaring varianles*/
	int count = 0;

	if (argc > 0)
	{
		/*while - print each arguments*/
	while (count < argc)
		{
	printf("%s\n", argv[count]);
	count++;
		}
	}
		return (0);
	}

