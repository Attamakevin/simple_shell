#include "shell.h"
/**
* exec - function to execute the command entered by the user
* @argv: command line arguement parameter
*
* Return: return void
*/



void exec(char **argv)

{

	/*int i;*/

	if (fork() == 0)

	{

		if (execve(argv[0], argv, environ) == -1)
		{
			perror("");
		}

	}

	else

	{

		wait(NULL);

		my_getline();

	}

}
