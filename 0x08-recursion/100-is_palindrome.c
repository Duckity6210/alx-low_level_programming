#include "main.h"

/**
 * _length - checks length of string
 * @s: string
 * Return: length of the string
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}
/**
 * checkp - checks if string is palindrome
 * @i: index
 * @l: length
 * @s: string
 * Return: 1 if palindromeor 0 if not
 */
int checkp(int i, int l, char *s)
{
	if (l > 0)
	{
		if (s[i] == s[l])
		{
			return (checkp(i + 1, l - 1, s));
		}
		else if (s[1] != s[l])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1 if palindrome or 0 if otherwise
 */
int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}
