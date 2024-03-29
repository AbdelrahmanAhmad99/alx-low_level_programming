#include "main.h"
int check_pal(char *s, int i, int b);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if a string .
 * @s: string to reverse.
 * Return: 1 if it is, 0 it's not.
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length.
 * Return: length .
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the characters recursively.
 * @s: check a string,
 * @i: iterator.
 * @b: length.
 * Return: 1 if palindrome, 0 if not.
 */
int check_pal(char *s, int i, int b)
{
if (*(s + i) != *(s + b - 1))
return (0);
if (i >= b)
return (1);
return (check_pal(s, i + 1, b - 1));
}
