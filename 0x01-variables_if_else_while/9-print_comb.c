#include <stdio.h>
#include <stdlib.h>
/**
 * main - main go go
 * Description:
 *
 * Return: 0
*/
int main(void)
{
int klk = 0;
while (klk < 10)
{
putchar(klk + 48);
if (klk != 9)
{
putchar(',');
putchar(' ');
}
klk++;
}
putchar('\n');
return (0);
}
