#include "shell.h"

/**
* _strlen - finds the length of the string
* @s: The input string
* Return: The length of the string
**/

unsigned int _strlen(char *s)
{
		unsigned int len = 0;

		while (s[len])
		len++;

		return (len);
}

/**
* print_env - Prints the current enviroment variable.
**/

void print_env(void)
{
	char **env = environ;

	while (*env)
	{		
	printf("%s\n", *env++);
	}
}
