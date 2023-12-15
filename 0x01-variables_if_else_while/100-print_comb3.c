#include <stdio.h>
#include <stdlib.h>
/**
 * main - main kik
 * Description: Write ...
 * Return: 0
*/
int main(void)
{
int ui;
int op = 0;
while (op < 10)
{
ui = 0;
while (ui < 10)
{
if (op != ui && op < ui)
{
putchar('0' + op);
putchar('0' + ui);
if (ui + op != 17)
{
putchar(',');
putchar(' ');
}
}
ui++;
}
op++;
}
putchar('\n');
return (0);
}
