#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 */

int main(void)
{
int num1;
int num2;
for (num1 = 0; num1 < 100; num1++)
{
for (num2 = 0; num2 < 100; num2++)
{
if (num1 <= num2)
{
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');
if (num1 != 99 || num2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return 0;
}
