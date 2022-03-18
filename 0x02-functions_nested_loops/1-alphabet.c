#include "main.h"

/**
 *  print_alphabet-abcd
 *  Description of function print_alphabet:
 *  this function print alphabet in lower case
 *
 *   Return: Always retur 0 for success
 */
void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
