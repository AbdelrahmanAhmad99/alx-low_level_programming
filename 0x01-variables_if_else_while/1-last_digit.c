#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main
 * Description: project for nember greatr than 0 and not 5 or 6
 * Return: 0
*/
int main(void)
{
int n;
int lastnumber;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (lastnumber > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, lastnumber);
else if (lastnumber == 0)
printf("Last digit of %i is %i and is 0\n", n, lastnumber);
else if (lastnumber < 6)
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastnumber);
return (0);
}
