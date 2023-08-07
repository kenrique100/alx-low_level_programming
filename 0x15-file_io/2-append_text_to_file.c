#include "main.h"
#include <stdio.h>
/**
* append_text_to_file - function that appends text to a file
*
* @filename: file to append to, if NULL, return -1
* @text_content: content to append, if NULL, do not append
*
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int append, count, stat;

if (filename == NULL)
return (-1);
append = open(filename, O_WRONLY | O_APPEND);
if (append == -1)
return (-1);
if (text_content == NULL)
return (1);
for (count = 0; text_content[count]; count++)
;
stat = write(append, text_content, count);
close(append);
return (stat == -1 ? -1 : 1);
}
