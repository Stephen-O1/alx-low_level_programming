#include "main.h"
/**
 *Implementation of _strncat function
 */


char *_strncat(char *dest, char *src, int n) 
{
int dest_len = _strlen(dest);
int i;

for (i = 0; src[i] != '\0' && i < n; i++) 
{
dest[dest_len + i] = src[i];
}

dest[dest_len + i] = '\0';
return dest;
}
