#include "main.h"
#include <unistd.h>

/**
*implementation of -putchar function
*/

int _putchar(char c)
{
/**
*Using sytem call write to print a character to he standard output
*/

return write(1, &c, 1);
}
