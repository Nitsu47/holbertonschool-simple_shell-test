#include <stdio.h>
/**
 * main - prints all the arguments
 * @ac: number of items in av
 * @av: array of strings
 * Return: arguments 
 */
int args(int ac, char **av)
{
    int count = 0;

    for (; count < ac; count++)
    {
        printf("%s\n", av[count]);
    }
    return (0);
}