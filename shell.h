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
int exec(char **args);
int _strtok(void);
char **tokenize(char *buffer, const char *x);
void _EOF(char **buffer);
int fork2(void);
char **_getPATH(char **env);
int getppid(void);
int maxpid();
int pid(void);
unsigned int _strlen(char *s);
void print_env(void);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char **tokenize(char *buffer, const char *x);
#endif
