#include "main.h"
/**
 * _strlen -find lenght of string
 * @str: string
 * Return: length
*/

int _strlen(char *str)
{
    int len;
    for (len = 0; str[len] != '\0'; len++)
            ;
    return (len);
}

/**
 * create_file - creates file with permission rw------- and writes content in
 * if file already exists, don't change permission and just truncate it
 * @filename: name to give to new file
 * @text_content: writes this content into file
 * Return: 1 on success, -1 or error
*/
int create_file(const char *filename, char *text_content)
{
    int fd;
    int n_write;

    if (!filename)
             return (-1);

    /* create with permission if the file doesn't exist, else truncate*/
    fd = open(filename, o_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
            return (-1);

    /* if nothing to write, just return newly created file */
    if (!text_content)
    {
        close(fd);
        return (1);
    }

    /*Write*/
    n_wrote = write(fd, text_content, _strlen(text_content));
    if (n_wrote == -1 || n_wrote != _strlen(text_content))
    {
        close(fd);
        return (-1);
    }

    close(fd);
    return (1);
}
