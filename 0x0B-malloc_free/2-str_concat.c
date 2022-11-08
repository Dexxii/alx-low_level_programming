#include "main.h"

/**
 * _strlen - counts the array
 * @s: array of elements
 * Return: i
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * str_concat - back a pointer to array
 * @s1: array number one
 * @s2: array number two
 * Return: Always an array dinamic
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size;
	char *dst;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
	return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
	*(dst + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
	*(dst + i) = *(s2 + j);
	i++;
	}

	return (dst);
}
