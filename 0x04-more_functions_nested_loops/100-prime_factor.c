#include <stdio.h>
#include <math.h>
/**
 * main - prints the number 612852475143 .
 * new line.
 * Return: 0
*/
int main(void)
{
long int b;
long int max;
long int a;
b = 612852475143;
max = -1;
while (b % 2 == 0)
{
max = 2;
b /= 2;
}
for (a = 3; a <= sqrt(b); a = a + 2)
{
while (b % a == 0)
{
max = a;
b = b / a;
}
}
if (b > 2)
max = b;
printf("%ld\n", max);
return (0);
}
