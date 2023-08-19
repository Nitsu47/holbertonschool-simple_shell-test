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
int _strcmp(char *s1, char *s2);
char **tokenize(char *buffer, const char *x);
char *_strcpy(char *dest, char *src);
int fork2(void);
int exec(char **args);
#endif
