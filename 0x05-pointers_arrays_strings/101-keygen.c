#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Function to generate a random character from a given set
 */

char getRandomChar()
{
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int index = rand() % (sizeof(charset) - 1);
return charset[index];
}

/**
 *Function to generate a random password of a given length
 */

void generateRandomPassword(char *password, int length)
{
for (int i = 0; i < length; i++) {
password[i] = getRandomChar();
}
password[length] = '\0';
}

int main()
{
srand(time(NULL));
/* Seed the random number generator with current time*/

int passwordLength = 10;
/* Change this to the desired password length */

char password[passwordLength + 1];

generateRandomPassword(password, passwordLength);
printf("Generated Password: %s\n", password);

return 0;
}
