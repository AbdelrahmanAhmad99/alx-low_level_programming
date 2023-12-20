#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times and llllllll
 * new line
*/
void print_alphabet_x10(void)
{
char wer;
int hg;
hg = 0;
while (hg < 10)
{
wer = 'a';
while (wer <= 'z')
{
_putchar(wer);
wer++;
}
_putchar('\n');
hg++;
}
}
