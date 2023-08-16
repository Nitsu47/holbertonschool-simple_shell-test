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


/**
* _strcmp - Function compares two strings
* @s1: first string
* @s2: second string
* Return: 1 if strings are the same, 0 if not
**/

int _strcmp(char *s1, char *s2)
{
		unsigned int i = 0;

		while (s1[i])
		{
		if (s1[i] != s2[i])
			return (0);
			i++;
		}
		return (1);
}