#include <stdio.h>
#include <stdlib.h>
/**
 * main - main run go
 * Description: gh
 * Return: 0
*/
int main(void)
{
int as;
int fg;
int po = 0;
while (po < 10)
{
fg = 0;
while (fg < 10)
{
as= 0;
while (as < 10)
{
if (as != fg && fg != op && op < fg && fg < as)
{
putchar('0' + op);
putchar('0' + fg);
putchar('0' + as);
if (as + fg + op != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}
as++;
}
fg++;
}
op++;
}
putchar('\n');
return (0);
}
