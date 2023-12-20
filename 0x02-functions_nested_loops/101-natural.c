#include <stdio.h>
/**
 * main - multiple
 * m 3 or 5  1024
 * Return: 0
*/
int main(void)
{
unsigned long int m3a, m5a, ma;
int h;
m3a = 0;
m5a = 0;
ma = 0;
for (h = 0; h < 1024; ++h)
{
if ((h % 3) == 0)
{
m3a = m3a + h;
}
else if ((h % 5) == 0)
{
m5a = m5a + h;
}
}
ma = m3a + m5a;
printf("%lu\n", ma);
return (0);
}
