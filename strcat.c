#include "shell.h"

/**
 * _strcat - This function appends the src string to the dest string
 * @src: char string to be appended
 * @dest: char string to be appended to
 * Return:  pointer to the resulting string des
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (; src[j] != '\0'; j++)
	{
		dest{i} = src[j];
		i++;
	}
	dest[x] = '\0';
	return (dest);
}
