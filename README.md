# Simple Shell Project
---

#### Background Context
This project is simply about writing a simple UNIX command interpreter.
It is a command-line interpreter or shell that provides a command line
user interface for Unix-like operating systems.
[wikipedia](https://en.wikipedia.org/wiki/Unix_shell)
---
#### Learning Objectives

- How does a shell work
- How does a pid and a ppid work
- How to manipulate the environment of the current process
- The difference between function call and system call
- How to create processes
- What are three prototypes of main
- How does the shell use the PATH to find the programs
- How to execute another program with the execve system call
- How to suspend the execution of a process until one of its children terminates
- EOF implementation / end of file
---
### Features
---
- Display a prompt and wait for user to type a command.
- Prompt is displayed again each time a command has been executed.
- Handle errors
- and [more](https://github.com/Attamakevin/simple_shell)
---
### Compilation  
All the files will be compiled with following:  
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`

Once compiled, to start the program, run:  
`./hsh`

To exit the program, run:  
`exit`

This shell supports most shell commands, such as `cat`, `pwd`, `ls`, and more.

## Authors
[Henry Kanu](https://github.com/stan545) and [Kevin Attama](https://github.com/Attamakevin)
