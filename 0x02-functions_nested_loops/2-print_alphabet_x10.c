#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10times in lower case followed by a new line
 */
 void print_alphabet_x10(void)
 {
    char i;
    int j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 'a'; j <= 'z'; j++)
                _putchar(j);
        _putchar('\n');
    }
 }