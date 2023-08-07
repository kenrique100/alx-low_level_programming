#include "main.h"
#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
* _strncmp - function that compares two strings
*
* @s1: the first string
* @s2: the second string
* @n: the max number of bytes to compare
*
* Return: 0 if the first n bytes of s1 and s2 are equal, otherwise non-zero
*/
int _strncmp(const char *s1, const char *s2, size_t n)
{
for ( ; n && *s1 && *s2; --n, ++s1, ++s2)
{
if (*s1 != *s2)
return (*s1 - *s2);
}
if (n)
{
if (*s1)
{
return (1);
}
if (*s2)
{
return (-1);
}
}
return (0);
}

/**
* _close - close a file descriptor and print an error message upon failure
*
* @fd: the file descriptor to close
*/
void _close(int fd)
{
if (close(fd) != -1)
return;
write(STDERR_FILENO, "Error: Can't close fd\n", 22);
exit(98);
}

/**
* _read - read from a file and print an error message upon failure
*
* @fd: the file descriptor to read from
* @buf: the buffer to write to
* @count: the number of bytes to read
*/
void _read(int fd, char *buf, size_t count)
{
if (read(fd, buf, count) != -1)
return;
write(STDERR_FILENO, "Error: Can't read from file\n", 28);
_close(fd);
exit(98);
}

/**
* elf_magic - print ELF magic
*
* @buffer: the ELF header
*/
void elf_magic(const unsigned char *buffer)
{
unsigned int k;

if (_strncmp((const char *) buffer, ELFMAG, 4))
{
write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
exit(98);
}

printf("ELF Header:\n  Magic:   ");

for (k = 0; k < 16; ++k)
printf("%02x%c", buffer[k], k < 15 ? ' ' : '\n');
}

/**
* elf_class - print ELF class
*
* @buffer: the ELF header
*
* Return: bit mode (32 or 64)
*/
size_t elf_class(const unsigned char *buffer)
{
printf("  %-34s ", "Class:");

if (buffer[EI_CLASS] == ELFCLASS64)
{
printf("ELF64\n");
return (64);
}
if (buffer[EI_CLASS] == ELFCLASS32)
{
printf("ELF32\n");
return (32);
}
printf("<unknown: %x>\n", buffer[EI_CLASS]);
return (32);
}