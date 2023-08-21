#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10
/**
 *Writing a program that generates password randomly
 */
void generateRandomPassword(char *password, int length)
{
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
size_t charset_length = sizeof(charset) - 1;

for (int i = 0; i < length; i++)
{
password[i] = charset[rand() % charset_length];
}
password[length] = '\0';
}

int main()
{
srand(time(NULL));
int passwordLength = PASSWORD_LENGTH;
char password[PASSWORD_LENGTH + 1];
generateRandomPassword(password, passwordLength);
printf("Generated Password: %s\n", password);
    
return 0;
}
