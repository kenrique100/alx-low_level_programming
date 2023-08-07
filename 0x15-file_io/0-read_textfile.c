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
int text, total, status;
char buffer[BUFFSIZE];

if (filename == NULL)
return (0);
text = open(filename, O_RDONLY);
if (text == -1)
return (0);
total = 0;
status = 1;
while (letters > BUFFSIZE && read_status != 0)
{
status = read(text, buffer, BUFFSIZE);
write(STDOUT_FILENO, buffer, status);
total += status;
letters -= BUFFSIZE;
}
status = read(text, buffer, letters);
write(STDOUT_FILENO, buffer, status);
total += status;
close(text);
return (total);
}
