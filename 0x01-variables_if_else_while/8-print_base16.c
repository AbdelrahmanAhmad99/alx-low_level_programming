#include <stdio.h>
#include <stdlib.h>
/**
 * main - main go go go
 * Description:
 * Return: 0
*/
int main(void)
{
char klk;
for (klk = '0'; klk <= '9'; klk++)
{
putchar(klk);
}
for (klk = 'a'; klk <= 'f'; klk++)
{
putchar(klk);
}
putchar('\n');
return (0);
}
