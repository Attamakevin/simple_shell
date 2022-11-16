#include "shell.h"

/**
* builtin_num - function to find number of builtin command
* Return: return number of builtins
*/
int builtin_num(void)
{
	return (sizeof(builtin_array) / sizeof(char *));
}
/**
* cd - function for implementation of cd  builtin
* Return: return zero on success
*@argv:arguement parameter
*/
int cd(char **argv)
{
	if (argv[1] == NULL)
	{
	perror("expected arguement to cd");
	}
	else
	{
		if (chdir(argv[1]) != 0)
		{
		perror("cd");
		}
	}
return (0);
}
/**
* help - function to implement help builtin
* Return: return zero on success
* @argv: arguement parameter
*/
int help(__attribute__((unused))char **argv)
{
	int i;

	printf("kevin Attama and Henry alx shell project 2022\n");
	printf("type command name and arguement and press enter\n");
	printf("the following are builtin:\n");
	for (i = 0; i < builtin_num; i++)
	{
	printf("%s\n", builtin_array[1]);
	}
printf("use the man command for further informations\n");
return (0);
/**
* my_exit - a function to implement exit builtin command
* @argv: argument parameter
* Return: return zero on success
*/
int my_exit(char **argv)
{
	int builtin_num(void);
	int i;
for (i = 0; i < builtin_num; i++)
	{
	if (_strcmp(argv[0], builtin_array[2]) == 0)
		{
		return (builtin_func[1] (&argv[0]));
		}
	}
return (0);
}
