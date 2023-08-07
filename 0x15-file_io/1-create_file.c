#include "main.h"
/**
* create_file - function that creates a file with rw------- permissions
*
* @filename: name of the file, if NULL, return -1
* @text_content: contents of the file. If NULL, create an empty file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int new, count, stat;

if (filename == NULL)
return (-1);
new = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (new == -1)
return (-1);
if (text_content == NULL)
{
close(new);
return (1);
}
for (count = 0; text_content[count]; count++)
;
stat = write(new, text_content, count);
if (close(new) == -1)
return (-1);
return (stat == -1 ? -1 : 1);
}
