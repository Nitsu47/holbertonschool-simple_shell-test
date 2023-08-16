#include <stdio.h>
#include <stdlib.c>
#include <unistd.h>
#include <string.h>
/**
* main - forks theinput given.
* 
*/
int main(int argc, char *argv)
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