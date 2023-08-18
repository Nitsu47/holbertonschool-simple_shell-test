#include "shell.h"
/**
* main - forks theinput given.
* 
*/
int fork()
{
    pid_t mypid = getpid();
    pid_t pid;
    
    printf("Before fork\n");
    pid = fork();
    if (pid == -1)
    {
        perror("Error:");
        return (1);
    }
    printf("After fork\n");
    my_pid = getpid();
    printf("My pid is %u\n", my_pid);
    return (0);
}