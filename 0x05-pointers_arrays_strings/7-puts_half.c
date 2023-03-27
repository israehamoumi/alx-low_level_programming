#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints the second half of a string
 * @str: input string
 */
void puts_half(char *str)
{
int len = strlen(str);
int i, start;
if (len % 2 == 0)
start = len / 2;
else
start = (len - 1) / 2;
for (i = start; i < len; i++)
putchar(str[i]);
putchar('\n');
}
