#include <stdio.h>
/*
 * main - prints .
 * number the variable m
 * write your line of code here...
 * Remember:
 * - you are not allowed to use a .
 * - you are not allowed to modify d .
 * - only one statement .
 * - you are not allowed to code anything else than this line of code
 *  Return: 0 .
*/
int main(void)
{

int m;

int a[5];

int *d;

a[2] = 1024;
d = &m;
*(d + 5) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
