#include "shell.h"
/**
* main - Shell core
* Return: 
*/
int main()
{
char *command = NULL;
    size_t len = 1024;
    ssize_t read;

    while (1)
    {
        printf("$ ");
        fflush(stdout);
        read = getline(&command, &len, stdin);
        prompt(buffer, readed);
        if (read == -1)
        {
            if (feof(stdin))
                break;
            perror("Error");
            break;
        }
    }
        if (command[read - 1] == '\n')
            command[read - 1] = '\0';

        printf("%s\n", command);

    free(command);
    return 0;
}