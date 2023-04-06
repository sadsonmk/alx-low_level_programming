#include <stdio.h>
#include "main.h"
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: is the input string
 * Return: 1 if s is palindrome else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal_recursion(s, 0, _strlen_recursion(s)));
}
/**
 * pal_recursion - checks a for palindrome
 * @s: the input string
 * @start: the starting point of the string
 * @end: the end of the string - equates to length
 * Return: 1 if s is a palindrome else 0
 */
int pal_recursion(char *s, int start, int end)
{
	if (start == end)
		return (1);
	if (*(s + start) != *(s + end - 1))
		return (0);
	if (start < (end + 1))
		return (pal_recursion(s, start + 1, end - 1));
	return (1);
}
/**
 * _strlen_recursion - returns the length of a string.
 * @s: the input string
 * Return: the length of s
 */
int _strlen_recursion(char *s)
{
	if ((*s == '\0'))
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
