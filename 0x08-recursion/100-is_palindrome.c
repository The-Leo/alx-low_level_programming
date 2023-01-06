#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to s.
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (s[length] == '\0')
	{
		return (length);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome - palindrome calculator.
 * @word: string to check.
 * @beginning: beginning of the word.
 * @end: end of the word.
 * Return: is palindrome?.
 */
int palindrome(char word[], int beginning, int end)
{
	if (beginning == end)
		return (1);
	if (word[beginning] != word[end])
		return (0);
	if (beginning < end + 1)
		return (palindrome(word, beginning + 1, end - 1));
	return (1);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: ponter to the string.
 * Return: 1 if true, 0 if false.
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	return (palindrome(s, 0, l));
}
