#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* argstostr - a function that concatenates all the arguments of your program
* @ac: the number of arguments to the program
* @av: the arguments to the program
* Return: returns a pointer to the concatenated string
*/
char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *str;
	int c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* Counts the length of every character in the argument */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; 1 ; j++)
		{
			c++;
			if (av[i][j] == '\0')
				break;
		}
	}
	c += 1;
	str = (char *) malloc(c);
	if (str == NULL)
		return (NULL);

	k = 0;
	/* Concatenates every argument to the string str */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; 1 ; j++)
		{
			str[k] = av[i][j];
			k++;

			if (av[i][j] == '\0')
			{
				str[k - 1] = '\n';
				break;
			}
		}
	}
	str[k] = '\0';

	return (str);
}
