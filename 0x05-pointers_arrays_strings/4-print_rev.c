#include <stdio.h>
/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: The string to print
 */
void print_rev(char *s)
{
int i, len = 0;
/* Find the length of the string */
while (s[len] != '\0')
len++;
/* Print the string in reverse order */
for (i = len - 1; i >= 0; i--)
putchar(s[i]);
putchar('\n');
}
