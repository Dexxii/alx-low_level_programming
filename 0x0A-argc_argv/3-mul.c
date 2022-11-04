#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the muliplication of two integers
 * @argc: Count arguments
 * @argv: Arguments vector
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)
	{
		a = atol(argv[1]);
		b = atol(argv[1]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
