#include <stdlib.h>
#include "main.h"


int is_digit(char c) 
{
return (c >= '0' && c <= '9');
}

int string_to_int(char *s) 
{
int result = 0;
while (*s) 
{
if (!is_digit(*s)) 
{
return -1; // Not a valid number
}
result = result * 10 + (*s - '0');
s++;
}
return result;
}

void print_number(int n) 
{
if (n == 0) 
{
_putchar('0');
return;
}
if (n < 0) 
{
_putchar('-');
n = -n;
}
int divisor = 1;
int temp = n;
while (temp > 0) 
{
temp /= 10;
divisor *= 10;
}
while (divisor > 1) 
{
divisor /= 10;
_putchar((n / divisor) + '0');
n %= divisor;
}
}

int main(int argc, char *argv[]) 
{
if (argc != 3) 
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}

int num1 = string_to_int(argv[1]);
int num2 = string_to_int(argv[2]);

if (num1 < 0 || num2 < 0) 
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}

int result = num1 * num2;

print_number(result);
_putchar('\n');

    return 0;
}
