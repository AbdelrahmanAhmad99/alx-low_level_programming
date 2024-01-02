#include "main.h"
/**
 * rev_string - in main reverses a string.
 * @a: string.
 */
void rev_string(char *a)
{
	char tmp;

	int i, len1, len2;

	len1 = 0;
	len2 = 0;
	while (a[len1] != '\0')
	{
		len1++;
	}
	len2 = len1 - 1;
	for (i = 0; i < len1 / 2; i++)
	{
	tmp = a[i];
	a[i] = a[len2];
	a[len2--] = tmp;
	}
}
