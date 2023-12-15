#include <stdio.h>
/**
 * main - main
 * Description:fff
 * Return: 0
*/
int main(void)
{
char dodo = 'a';
while (dodo <= 'z')
{
putchar(dodo);
dodo++;
}
dodo = 'A';
while (dodo <= 'Z')
{
putchar(dodo);
dodo++;
}
putchar('\n');
return (0);
}
