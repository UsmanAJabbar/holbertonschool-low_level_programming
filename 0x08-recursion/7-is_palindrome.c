#include "holberton.h"

int is_palindrome(char *s)
{
	int index = _strlen_recursion(s);

	if (*s != s[index - 1])
	{
		return (0);
	}

	else if (*s == s[index - 1])
	{
		is_palindrome(s + 1);
	}

return (1);
}

#include "holberton.h"

/**
 * _strlen_recursion - counts all indexes
 * ... (1 + _) FOR EACH ITERATATION OF THE FUNCTION
 * IT COUNTS ONE
 * @s: contains string
 * the first character printed
 * Return: Results to fill in values
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
