#include <stdio.h>
#include <stdlib.h>
/**
 * main - main hard
 * Description: a program
 * Return: 0
*/
int main(void)
{
int m = 0;
int hj;
int jk;
int mb2;
int hjk;
int jkl;
while (m <= 98)
{
hj = (m / 10 + '0');
jk = (mb % 10 + '0');
mb2 = 0;
while (mb2 <= 99)
{
hjk = (mb2 / 10 + '0');
jkl = (mb2 % 10 + '0');
if (m < mb2)
{
putchar(hj);
putchar(jk);
putchar(' ');
putchar(hjk);
putchar(jkl);
if (m != 98)
{
putchar(',');
putchar(' ');
}
}
mb2++;
}
m++;
}
putchar('\n');
return (0);
}
