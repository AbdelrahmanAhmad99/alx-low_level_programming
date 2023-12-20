#include <stdio.h>
/**
 * main -  m 98 Fibonacci numbers
 *
 * Return: 0
*/
int main(void)
{
unsigned long int a, s, d, aja, djd, aka, dkd;
s = 1;
d = 2;
printf("%lu", s);
for (a = 1; a < 91; a++)
printf(", %lu", d);
d = d + s;
s = d - s;
}
aja = s / 1000000000;
djd = s % 1000000000;
aka = d / 1000000000;
dkd = d % 1000000000;
for (a = 92; a < 99; ++a)
{
printf(", %lu", aka + (dkd / 1000000000));
printf("%lu", dkd % 1000000000);
aka = aka + aja;
aja = aka - aja;
dkd = dkd + djd;
djd = dkd - djd;
}
printf("\n");
return (0);
}
