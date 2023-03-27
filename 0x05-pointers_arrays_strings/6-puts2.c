#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: pointer to the string to print
 *
 * Return: void
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
