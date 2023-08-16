#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints "$ ", wait for the user to enter a command, prints it on the next line.
 * @command: command entered by user
 * @len: lenght of the input given by user
 * @read: read the line to check if an error happen.
 * Return: command given by user.
 */
 int main()
 {
    char *command = NULL;
    size_t len = 0;
    ssize_t read;

    while (1)
    {
        printf("$ ");
        fflush(stdout);
        if ((read = getline(&command, &len, stdin)) == -1)
            break;
        printf("%s", command);
    }
    free(command);
    return 0;
 }