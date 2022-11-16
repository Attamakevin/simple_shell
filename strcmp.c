#include "shell.h"

/**
 * _strcmp - This function compares two strings
 * @s1: First string
 * @s2: Second String
 * Return: returns negative integer value if s1 < s2 or 0 if equal
 * or Positive integer if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
