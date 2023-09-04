#include "main.h"
#include <stddef.h>
/**
 *Implememntation of _strchr function
 */

char *_strchr(char *s, char c) 
{
while (*s != '\0') 
{
if (*s == c) 
{
return (char *)s;
}
s++;
}
return NULL;
}
