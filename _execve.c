#include "shell.h"
/**
* _execve - executes commands passed.
* @command: first token of a line taken as command.
* @line: line with all arguments.
* @numline: number in the line pisition.
* @linecp: copy of the line to not change original line.
* @tok: tokens with every argument passed.
* @args: arguments tokenized.
* @count: counter to iterate
*/
int _execve(char *command, char *line)
{
    unsigned long int numline;
    char linecp, *newcommand, *tok, *args;
    int count;

    _strcpy(linecp, line);
    tok = strtok(linecp, "\n");
    newcommand = strtok(tok, " ");

    arg[0] = command;
    while (newcommand != NULL)
    {
        newcommand = strtok(NULL, " ");
        args[count] = newcommand;
        count++;
    }
}