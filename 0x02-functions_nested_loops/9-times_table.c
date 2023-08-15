#include "main.h"
#include <stdio.h>

/**
 * times_table - print multiplication table
 */

void times_table(void)
{
int row;
int column;
int product;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
product = (row * column);
if (column == 0)
{
putchar('0' + product);
}
else if (product <= 9)
{
putchar(',');
putchar(' ');
putchar(' ');
putchar('0' + product);
}
else if (product > 9)
{
putchar(',');
putchar(' ');
putchar('0' + (product / 10));
putchar('0' + (product % 10));
}
}
putchar('\n');
}
}
