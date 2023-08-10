#include <unistd.h>
#include <stdio.h>
/**
 *
 *
 */
 int main(void)
 {
    pid_t myppid;

    myppid = getppid();
    printf("%u\n", myppid);
    return (0);
 }