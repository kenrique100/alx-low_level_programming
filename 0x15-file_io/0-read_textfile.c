#include "main.h"
/**
* read_textfile - function that reads a text file
* and prints it to the POSIX stdout
*
* @filename: name of file
* @letters: number of characters
*
* Return: 0 on success
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
int text;
char *buffer;
ssize_t total, status;

if (!filename)
return (0);
status = open(filename, O_RDONLY);
if (status == -1)
{
close(status);
return (0);
}

buffer = malloc(sizeof(char) * letters);
if (!buffer)
{
close(status);
return (0);
}

total = read(status, buffer, letters);

if (total == -1)
{
close(status);
free(buffer);
return (0);
}

text = write(STDOUT_FILENO, buffer, total);

if (text == -1)
{
close(status);
free(buffer);
return (0);
}
close(status);
return (total);
}
