#include "shell.h"

/**
 * _strcpy - This function copies a string
 * @dest: destination to be copied to
 * @src: source of string
 * Return: It returns the pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';

	return (dest);
}
