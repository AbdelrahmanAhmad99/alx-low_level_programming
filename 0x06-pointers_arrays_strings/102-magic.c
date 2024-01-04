#include <stdio.h>
#include "main.h"
/*
 * Description: main line of code here.
 * - you are not allowed to use s.
 * - you are not allowed to modify d.
 * - you are not allowed to code anything.
 * Return: 0 .
 */
int main(void)
{

int n;

int s[5];

int *d;

s[2] = 1024;
d = &n;
*(d + 5) = 98;
printf("a[2] = %d\n", s[2]);
return (0);
}
