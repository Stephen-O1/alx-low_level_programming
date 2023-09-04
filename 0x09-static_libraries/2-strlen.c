#include "main.h"

/**
 *Implementation of _strlen function
 */
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return len;
}
