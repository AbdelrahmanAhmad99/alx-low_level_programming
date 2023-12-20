#include <stdio.h>
/**
 * main - go prints oo
 * Return: 0
*/
int main(void)
{
long int a, s, d, f;
s = 1;
d = 2;
for (a = 1; a <= 50; ++a)
{
if (s != 20365011074)
{
printf("%ld, ", s);
}
else
{
printf("%ld\n", s);
}
f = s + d;
s = d;
d = f;
}
return (0);
}
