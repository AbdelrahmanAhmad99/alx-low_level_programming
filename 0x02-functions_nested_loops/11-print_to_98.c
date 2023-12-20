#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints n to 98
 *
 * @m: print num
*/
void print_to_98(int m)
{
int ss, aa;
if (m <= 98)
{
for (aa = m; aa <= 98; aa++)
{
if (aa != 98)
printf("%d, ", aa);
else if (aa == 98)
printf("%d\n", aa);
}
}
else if (m >= 98)
{
for (ss = m; ss >= 98; ss--)
{
if (ss != 98)
printf("%d, ", ss);
else if (ss == 98)
printf("%d\n", ss);
}
}
}
