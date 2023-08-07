#include "main.h"
#include <stdio.h>

/**
* main - function that checks the code for Holberton School students
*
* @ac: arg count
* @av: array of argument tokens
*
* Return: 0 on success
*/
int main(int ac, char *av[])
{
int from, to, rd_status, wr_stat;
mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
char buffer[BUFFSIZE];

if (ac != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
from = open(av[1], O_RDONLY);
if (from == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
if (to == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
rd_status = 1;
while (rd_status)
{
rd_status = read(from, buffer, BUFFSIZE);
if (rd_status == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
if (rd_status > 0)
{
wr_stat = write(to, buffer, rd_status);
if (wr_stat != rd_status || wr_stat == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
}
}
if (close(from) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
if (close(to) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);
return (0);
}
