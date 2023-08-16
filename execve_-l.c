#include <stdio.h>
#include <unistd.h>
/**
 * main - executes commands passed
 * Return: Always 0.
 */
int main(void)
{
    char *argv[] = {"/bin/ls", "-l", NULL};

    int value = execve(argv[0], argv, NULL);

    if (value == -1)
        perror("An error happend:");

    printf("Success\n");
    return (0);
}