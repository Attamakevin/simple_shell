#include "shell.h"
/**
* my_getline - a function to read command from stdin
* it takes no arguement
* Return: pointer to the str read is returned
*/

char *my_getline()
{
	char *cmd = NULL;
	size_t n;

	write(1, "kevin&henry@alxsh:/$ ", 23);
	if (getline(&cmd, &n, stdin) == -1)
	{
	exit(0);
	}
	tokenizer(cmd);
return (cmd);
}
