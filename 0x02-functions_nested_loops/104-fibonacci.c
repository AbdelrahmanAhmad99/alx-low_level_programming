#include <stdio.h>
/**
 * main -  m 98 Fibonacci numbers
 *
 * Return: 0
*/
int main(void)
{
unsigned long int a, s, d, aa, dd, ak, dk;
s = 1;
d = 2;
printf("%lu", s);
for (a = 1; a < 91; a++)
{
printf(", %lu", d);
d = d + s;
s = d - s;
}
aa = s / 1000000000;
dd = s % 1000000000;
ak = d / 1000000000;
dk = d % 1000000000;
for (a = 92; a < 99; ++a)
{
printf(", %lu", ak + (dk / 1000000000));
printf("%lu", dk % 1000000000);
ak = ak + aa;
aa = ak - aa;
dk = dk + dd;
dd = dk - dd;
}
printf("\n");
return (0);
}
