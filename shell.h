#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;
int cd(char **argv);
int help(char **argv);
int my_exit(char **argv);
char *my_getline();
char **tokenizer(char *cmd);
void exec(char **argv);
void file_stat(char *cmd, char **argv);

#endif
