#include <stdio.h>
/**
 * main - main go go
 * Description: Get a random check number
 * Return: 0
*/
int main(void)
{
char lion = 'a';
while (lion <= 'z')
{
if (lion != 'e' && lion != 'q')
{
putchar(lion);
}
lion++;
}
putchar('\n');
return (0);
}
