#include "main.h"

/**                                                                                                      
 *Implementation of _puts function                                                                       
 */

void _puts(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s++;
}
}
