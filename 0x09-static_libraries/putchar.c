#include "main.h"  
/**
*Include the header file with function prototypes
*Implementation of _putchar function
*You can use the system call write to print a character to the standard output (stdout).
*The file descriptor for stdout is typically 1.
*/

int _putchar(char c)
{
return write(1, &c, 1);
}
