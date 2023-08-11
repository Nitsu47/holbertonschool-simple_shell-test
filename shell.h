#ifndef SHELL_H
#define SHELL_H
/**
* libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <sys/wait.h>

/**
* prototypes */
unsigned int _strlen(char *s);
void print_env(void);
#endif
