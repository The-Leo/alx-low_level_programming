#include "main.h"
#include <stdlib.h>

int count_str1(char *s1);
int count_str2(char *s2);

/**
* str_concat  - a function that concantenates two strings
* @s1: the destination string
* @s2: the string to be added to s1
* Return: returns a pointer to a newly allocated
* space in memory which contains the contents of s1, followed
* by the contents of s2
*/
char *str_concat(char *s1, char *s2)
{
	int i;
	int j = 0, c = 0, c1 = 0, c2 = 0;
	char *newStr;

	c1 = count_str1(s1);
	c2 = count_str2(s2);

	c = c1 + c2 + 1;
	newStr = (char *) malloc(c * sizeof(char));
	if (newStr == NULL)
		return (NULL);
	i = 0;
	if (s1 != NULL)
	{
		for (i = 0; i < c1; i++)
		{
			newStr[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for ( ; i < c; i++)
		{
			newStr[i] = s2[j];
			j++;
		}
	}
	newStr[c - 1] = '\0';
	return (newStr);
}

/**
* count_str1 - counts the number of characters in s1
* @s1: the string to be counted
* Return: returns the number of characters an an int, returns 0 if s1 is NULL
*/
int count_str1(char *s1)
{
	int i;
	int c1 = 0;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			c1++;
		}
	}
	return (c1);
}

/**
* count_str2 - counts the number of characters in s2
* @s2: the string to be counted
* Return: returns the number of characters an an int, returns 0 if s2 is NULL
*/
int count_str2(char *s2)
{
	int i;
	int c2 = 0;

	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			c2++;
		}
	}
	return (c2);
}
