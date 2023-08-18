#include <unistd.h>
#include <stdio.h>
/**
 *
 *
 */
 int getppid(void)
 {
    pid_t myppid;

    myppid = getppid();
    printf("%u\n", myppid);
    return (0);
 }