#include <stdio.h>
/**
 * main -prints sum of the even
 * on new line
 * Return: 0
*/
int main(void)
{
int l;
unsigned long int a, s, d, f;
a = 1;
s = 2;
f = 0;
for (l = 1; l <= 33; ++l)
{
if (a < 4000000 && (a % 2) == 0)
{
f = f + a;
}
d = a + s;
a = s;
s = d;
}
printf("%lu\n", f);
return (0);
}
