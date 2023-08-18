#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - divide an array in tokens(arguments).
* Return: an array with each argument in the line.
*/
int _strtok(void)
{
    char *buffer = malloc(1024);
    char *token;
    size_t leng = 1024;

    while (1)
    {
        printf("$ ");
        getline(&buffer, &leng, stdin);
        printf("%s", buffer);
    }
    token = strtok(buffer, "");

    if(token == NULL)
    {
        return (-1);
    }
    while (token)
    {
        printf("%s", token);
        token = strtok(NULL, " ");
    }
    return (0);
}