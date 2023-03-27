#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the input string
 */
void puts_half(char *str)
{
int len = strlen(str);
int n = (len + 1) / 2;
int i;
for (i = n; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
}
