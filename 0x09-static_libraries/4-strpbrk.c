#include "main.h"
#include <stddef.h>

/**
 *implementation of _strpbrk function
 */

char *_strpbrk(char *s, char *accept) 
{
while (*s != '\0') 
{
if (_strchr(accept, *s) != NULL) 
{
return (char *)s;
}
s++;
}
return NULL;
}
