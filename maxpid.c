#include "unistd.h"
#include "stdio.h"
/**
 *
 *
 */
 int main()
 {
    pid_t maxpid = (1 << 16) - 1;
    printf("%u\n", maxpid);
    return 0;
 }