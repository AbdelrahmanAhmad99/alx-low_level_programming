#include "main.h"
/**
 * wildcmp - compares two strings.
 * if the strings .
 * otherwise return 0 .
 * @x1: the normal string.
 * @x2: the special string .
 * Return: 1 if identical, else 0 .
 */
int wildcmp(char *x1, char *x2)
{
if (*x2 == '\0' && *x1 == '\0')
return (1);
if (*x2 == '*' && *(x2 + 1) != '\0' && *x1 == '\0')
return (0);
if (*x1 == *x2)
return (wildcmp(x1 + 1, x2 + 1));
if (*x2 == '*')
return (wildcmp(x1, x2 + 1) || wildcmp(x1 + 1, x2));
return (0);
}
